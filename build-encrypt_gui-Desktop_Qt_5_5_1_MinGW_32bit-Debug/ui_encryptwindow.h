/********************************************************************************
** Form generated from reading UI file 'encryptwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENCRYPTWINDOW_H
#define UI_ENCRYPTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EncryptWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_INPUT;
    QLabel *label_OUTPUT;
    QLineEdit *lineEdit_INPUT;
    QLineEdit *lineEdit_OUTPUT;
    QLabel *label_DISPLAY;
    QPushButton *pushButton_NEW;
    QPushButton *pushButton_SAVE;
    QPushButton *pushButton_LOAD;
    QPushButton *pushButton_ENCODE;
    QPushButton *pushButton_DECODE;
    QPushButton *pushButton_CLEAR;
    QPushButton *pushButton_COPY;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *EncryptWindow)
    {
        if (EncryptWindow->objectName().isEmpty())
            EncryptWindow->setObjectName(QStringLiteral("EncryptWindow"));
        EncryptWindow->resize(1052, 328);
        centralWidget = new QWidget(EncryptWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_INPUT = new QLabel(centralWidget);
        label_INPUT->setObjectName(QStringLiteral("label_INPUT"));
        label_INPUT->setGeometry(QRect(80, 50, 91, 31));
        QFont font;
        font.setPointSize(10);
        label_INPUT->setFont(font);
        label_INPUT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_OUTPUT = new QLabel(centralWidget);
        label_OUTPUT->setObjectName(QStringLiteral("label_OUTPUT"));
        label_OUTPUT->setGeometry(QRect(80, 90, 91, 31));
        label_OUTPUT->setFont(font);
        label_OUTPUT->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit_INPUT = new QLineEdit(centralWidget);
        lineEdit_INPUT->setObjectName(QStringLiteral("lineEdit_INPUT"));
        lineEdit_INPUT->setGeometry(QRect(180, 50, 701, 31));
        lineEdit_INPUT->setFont(font);
        lineEdit_OUTPUT = new QLineEdit(centralWidget);
        lineEdit_OUTPUT->setObjectName(QStringLiteral("lineEdit_OUTPUT"));
        lineEdit_OUTPUT->setEnabled(false);
        lineEdit_OUTPUT->setGeometry(QRect(180, 90, 701, 31));
        lineEdit_OUTPUT->setFont(font);
        label_DISPLAY = new QLabel(centralWidget);
        label_DISPLAY->setObjectName(QStringLiteral("label_DISPLAY"));
        label_DISPLAY->setGeometry(QRect(90, 240, 911, 41));
        label_DISPLAY->setFont(font);
        pushButton_NEW = new QPushButton(centralWidget);
        pushButton_NEW->setObjectName(QStringLiteral("pushButton_NEW"));
        pushButton_NEW->setGeometry(QRect(80, 180, 101, 31));
        pushButton_SAVE = new QPushButton(centralWidget);
        pushButton_SAVE->setObjectName(QStringLiteral("pushButton_SAVE"));
        pushButton_SAVE->setGeometry(QRect(200, 180, 101, 31));
        pushButton_LOAD = new QPushButton(centralWidget);
        pushButton_LOAD->setObjectName(QStringLiteral("pushButton_LOAD"));
        pushButton_LOAD->setGeometry(QRect(320, 180, 101, 31));
        pushButton_ENCODE = new QPushButton(centralWidget);
        pushButton_ENCODE->setObjectName(QStringLiteral("pushButton_ENCODE"));
        pushButton_ENCODE->setGeometry(QRect(440, 180, 101, 31));
        pushButton_DECODE = new QPushButton(centralWidget);
        pushButton_DECODE->setObjectName(QStringLiteral("pushButton_DECODE"));
        pushButton_DECODE->setGeometry(QRect(560, 180, 101, 31));
        pushButton_CLEAR = new QPushButton(centralWidget);
        pushButton_CLEAR->setObjectName(QStringLiteral("pushButton_CLEAR"));
        pushButton_CLEAR->setGeometry(QRect(680, 180, 101, 31));
        pushButton_COPY = new QPushButton(centralWidget);
        pushButton_COPY->setObjectName(QStringLiteral("pushButton_COPY"));
        pushButton_COPY->setGeometry(QRect(800, 180, 101, 31));
        EncryptWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(EncryptWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1052, 30));
        EncryptWindow->setMenuBar(menuBar);

        retranslateUi(EncryptWindow);

        QMetaObject::connectSlotsByName(EncryptWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EncryptWindow)
    {
        EncryptWindow->setWindowTitle(QApplication::translate("EncryptWindow", "EncryptWindow", 0));
        label_INPUT->setText(QApplication::translate("EncryptWindow", "INPUT:", 0));
        label_OUTPUT->setText(QApplication::translate("EncryptWindow", "OUTPUT:", 0));
        label_DISPLAY->setText(QApplication::translate("EncryptWindow", "SOMETHING HAPPANED", 0));
        pushButton_NEW->setText(QApplication::translate("EncryptWindow", "NEW", 0));
        pushButton_SAVE->setText(QApplication::translate("EncryptWindow", "SAVE", 0));
        pushButton_LOAD->setText(QApplication::translate("EncryptWindow", "LOAD", 0));
        pushButton_ENCODE->setText(QApplication::translate("EncryptWindow", "ENCODE", 0));
        pushButton_DECODE->setText(QApplication::translate("EncryptWindow", "DECODE", 0));
        pushButton_CLEAR->setText(QApplication::translate("EncryptWindow", "CLEAR", 0));
        pushButton_COPY->setText(QApplication::translate("EncryptWindow", "COPY", 0));
    } // retranslateUi

};

namespace Ui {
    class EncryptWindow: public Ui_EncryptWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENCRYPTWINDOW_H
