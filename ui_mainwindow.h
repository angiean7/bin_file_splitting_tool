/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox_2;
    QTextEdit *textEdit_Log;
    QGroupBox *groupBox_10;
    QLabel *label_PofAddr;
    QPushButton *pushButton_PofFileConvert;
    QPushButton *pushButton_PofFileBrowse;
    QLineEdit *lineEdit_PofFileName;
    QLabel *label_PofAddr_2;
    QLabel *PofSize;
    QLabel *label_PofAddr_4;
    QLabel *BinSize;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(431, 271);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 91, 411, 141));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setBold(true);
        font.setWeight(75);
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QLatin1String("QGroupBox\n"
"{\n"
"	font-family: \"Arial\";\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"}"));
        textEdit_Log = new QTextEdit(groupBox_2);
        textEdit_Log->setObjectName(QStringLiteral("textEdit_Log"));
        textEdit_Log->setGeometry(QRect(10, 20, 391, 111));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        textEdit_Log->setFont(font1);
        groupBox_10 = new QGroupBox(centralWidget);
        groupBox_10->setObjectName(QStringLiteral("groupBox_10"));
        groupBox_10->setGeometry(QRect(10, 10, 411, 81));
        groupBox_10->setFont(font);
        groupBox_10->setStyleSheet(QLatin1String("QGroupBox\n"
"{\n"
"	font-family: \"Arial\";\n"
"    font-size: 12px;\n"
"    font-weight: bold;\n"
"}"));
        label_PofAddr = new QLabel(groupBox_10);
        label_PofAddr->setObjectName(QStringLiteral("label_PofAddr"));
        label_PofAddr->setGeometry(QRect(10, 22, 71, 16));
        label_PofAddr->setFont(font1);
        label_PofAddr->setStyleSheet(QLatin1String("font-family: \"Arial\";\n"
"font-size:12px;"));
        pushButton_PofFileConvert = new QPushButton(groupBox_10);
        pushButton_PofFileConvert->setObjectName(QStringLiteral("pushButton_PofFileConvert"));
        pushButton_PofFileConvert->setGeometry(QRect(310, 50, 80, 23));
        pushButton_PofFileConvert->setFont(font);
        pushButton_PofFileConvert->setStyleSheet(QLatin1String("background-color: rgb(85, 170, 255);\n"
"font-family: \"Arial\";\n"
"font-weight:bold;\n"
"font-size:12px;"));
        pushButton_PofFileBrowse = new QPushButton(groupBox_10);
        pushButton_PofFileBrowse->setObjectName(QStringLiteral("pushButton_PofFileBrowse"));
        pushButton_PofFileBrowse->setGeometry(QRect(310, 20, 80, 23));
        pushButton_PofFileBrowse->setFont(font1);
        pushButton_PofFileBrowse->setStyleSheet(QLatin1String("background-color: rgb(85, 170, 255);\n"
"font-family: \"Arial\";\n"
"font-size:12px;"));
        lineEdit_PofFileName = new QLineEdit(groupBox_10);
        lineEdit_PofFileName->setObjectName(QStringLiteral("lineEdit_PofFileName"));
        lineEdit_PofFileName->setGeometry(QRect(90, 20, 211, 21));
        lineEdit_PofFileName->setFont(font1);
        lineEdit_PofFileName->setStyleSheet(QStringLiteral(""));
        label_PofAddr_2 = new QLabel(groupBox_10);
        label_PofAddr_2->setObjectName(QStringLiteral("label_PofAddr_2"));
        label_PofAddr_2->setGeometry(QRect(10, 50, 51, 16));
        label_PofAddr_2->setFont(font1);
        label_PofAddr_2->setStyleSheet(QLatin1String("font-family: \"Arial\";\n"
"font-size:12px;"));
        PofSize = new QLabel(groupBox_10);
        PofSize->setObjectName(QStringLiteral("PofSize"));
        PofSize->setGeometry(QRect(60, 50, 81, 16));
        PofSize->setFont(font1);
        PofSize->setStyleSheet(QLatin1String("font-family: \"Arial\";\n"
"font-size:12px;"));
        label_PofAddr_4 = new QLabel(groupBox_10);
        label_PofAddr_4->setObjectName(QStringLiteral("label_PofAddr_4"));
        label_PofAddr_4->setGeometry(QRect(150, 50, 51, 16));
        label_PofAddr_4->setFont(font1);
        label_PofAddr_4->setStyleSheet(QLatin1String("font-family: \"Arial\";\n"
"font-size:12px;"));
        BinSize = new QLabel(groupBox_10);
        BinSize->setObjectName(QStringLiteral("BinSize"));
        BinSize->setGeometry(QRect(200, 50, 101, 16));
        BinSize->setFont(font1);
        BinSize->setStyleSheet(QLatin1String("font-family: \"Arial\";\n"
"font-size:12px;"));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SplittingTool Ver1.00", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Log", Q_NULLPTR));
        groupBox_10->setTitle(QApplication::translate("MainWindow", "Bin", Q_NULLPTR));
        label_PofAddr->setText(QApplication::translate("MainWindow", "Bin File Path", Q_NULLPTR));
        pushButton_PofFileConvert->setText(QApplication::translate("MainWindow", "Convert", Q_NULLPTR));
        pushButton_PofFileBrowse->setText(QApplication::translate("MainWindow", "Browse...", Q_NULLPTR));
        label_PofAddr_2->setText(QApplication::translate("MainWindow", "src size:", Q_NULLPTR));
        PofSize->setText(QString());
        label_PofAddr_4->setText(QApplication::translate("MainWindow", "dst size:", Q_NULLPTR));
        BinSize->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
