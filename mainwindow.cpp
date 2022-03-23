#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStyle>
#include <QDebug>
#include <QFileDialog>
#include <QFile>
#include <QtMath>
#include <QtWidgets/QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->setStyleSheet("background-color:white;");
    ui->setupUi(this);
    this->setFixedSize(431,260);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::LogDisPlay(QString strContext)
{
    QTextCursor cursor = ui->textEdit_Log->textCursor();
    cursor.movePosition(QTextCursor::End);
    ui->textEdit_Log->setTextCursor(cursor);

    ui->textEdit_Log->append(strContext);
}

void MainWindow::on_pushButton_PofFileConvert_clicked()
{
    qint64  i64FileSize     = 0;
    qint64  i64DstBuffSize  = 0;
    int     i               = 0;
    int     HeaderSize      = 143;
    int     EndSize         = 97;
    char    *pBuffer        = NULL;
    QString strPofFileName;
    QString strBinFileName_L;
    QString strBinFileName_H;

    strPofFileName = ui->lineEdit_PofFileName->text();
    if(strPofFileName.isEmpty() == true)
    {
        QMessageBox::warning(this,"Warnning Message", "Please select pof file!");
        return;
    }

    // open pof file
    QFile PofFile(strPofFileName);
    if(PofFile.open(QIODevice::ReadOnly) == false)
    {
        QMessageBox::warning(this,"Warnning Message", "DMA write source file open failed!");
        return;
    }

    LogDisPlay("Start converting pof file.");

    i64FileSize = PofFile.size();
    i64DstBuffSize = i64FileSize-(HeaderSize+EndSize);

    QString str = QString("0x%1").arg(i64FileSize, 0, 16);
    ui->PofSize->setText(str);
    str = QString("0x%1").arg((int)(i64DstBuffSize*0.5), 0, 16);
    ui->BinSize->setText(str);

    pBuffer = new char[sizeof(char) * i64DstBuffSize];
    memset(pBuffer, 0, sizeof(char) * i64DstBuffSize);

    // get buffer without header and end
    QByteArray PofFileBuff = PofFile.read(i64FileSize);
    memcpy(pBuffer, PofFileBuff.data()+HeaderSize, i64DstBuffSize);

    PofFile.close();

    // get bin File name
    strBinFileName_L = strPofFileName;
    strBinFileName_L.replace(".pof","_Low.bin");
    strBinFileName_H = strPofFileName;
    strBinFileName_H.replace(".pof","_High.bin");

    QFile BinFile_L(strBinFileName_L);
    if(BinFile_L.open(QIODevice::ReadWrite|QIODevice::Append) == false)
    {
        LogDisPlay("Open bin file failed!");
        delete[] pBuffer;
        pBuffer = NULL;
        return;
    }

    // create bin file high
    QFile BinFile_H(strBinFileName_H);
    if(BinFile_H.open(QIODevice::ReadWrite|QIODevice::Append) == false)
    {
        LogDisPlay("Open bin file failed!");
        delete[] pBuffer;
        pBuffer = NULL;
        return;
    }

    // save to file
    QDataStream out_L(&BinFile_L);
    QDataStream out_H(&BinFile_H);

    for(i = 0; (4*i < i64DstBuffSize); i++)
    {
        out_L.writeRawData((pBuffer+4*i), 2);
        out_H.writeRawData((pBuffer+(4*i+2)), 2);
    }

    LogDisPlay("Convert bin file succeed!");
    delete[] pBuffer;
    pBuffer = NULL;
    BinFile_L.close();
    BinFile_H.close();
}

void MainWindow::on_pushButton_PofFileBrowse_clicked()
{
    QString FileName;
    qint64  i64FileSize     = 0;
    qint64  i64DstBuffSize  = 0;
    int     HeaderSize      = 143;
    int     EndSize         = 97;

    FileName = QFileDialog::getOpenFileName(
    this,
    tr("Please select .pof file."),
    "",
    tr("(*.pof)"));

    ui->lineEdit_PofFileName->setText(FileName);

    // open pof file
    QFile PofFile(FileName);
    if(PofFile.open(QIODevice::ReadOnly) == false)
    {
        QMessageBox::warning(this,"Warnning Message", "DMA write source file open failed!");
        return;
    }

    i64FileSize = PofFile.size();
    i64DstBuffSize = i64FileSize-(HeaderSize+EndSize);

    QString str = QString("0x%1").arg(i64FileSize, 0, 16);
    ui->PofSize->setText(str);
    str = QString("0x%1").arg((int)(i64DstBuffSize*0.5), 0, 16);
    ui->BinSize->setText(str);

}
