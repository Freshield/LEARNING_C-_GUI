/********************************************************************************
** Form generated from reading UI file 'to_gf.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TO_GF_H
#define UI_TO_GF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TO_GF
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *TO_GF)
    {
        if (TO_GF->objectName().isEmpty())
            TO_GF->setObjectName(QStringLiteral("TO_GF"));
        TO_GF->resize(1056, 659);
        centralWidget = new QWidget(TO_GF);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 1011, 501));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\273\277\345\256\213"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 530, 201, 91));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\345\275\251\344\272\221"));
        font1.setPointSize(14);
        pushButton->setFont(font1);
        TO_GF->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TO_GF);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1056, 30));
        TO_GF->setMenuBar(menuBar);

        retranslateUi(TO_GF);

        QMetaObject::connectSlotsByName(TO_GF);
    } // setupUi

    void retranslateUi(QMainWindow *TO_GF)
    {
        TO_GF->setWindowTitle(QApplication::translate("TO_GF", "TO_GF", 0));
        label->setText(QString());
        pushButton->setText(QApplication::translate("TO_GF", "\345\277\253\347\202\271\346\210\221\357\274\201\357\274\201\357\274\201", 0));
    } // retranslateUi

};

namespace Ui {
    class TO_GF: public Ui_TO_GF {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TO_GF_H
