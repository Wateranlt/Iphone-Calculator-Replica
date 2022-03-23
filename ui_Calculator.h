/********************************************************************************
** Form generated from reading UI file 'Calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QPushButton *AC;
    QPushButton *plusMinus;
    QPushButton *Percents;
    QPushButton *Divide;
    QPushButton *Button_7;
    QPushButton *Button_4;
    QPushButton *Button_8;
    QPushButton *Button_9;
    QPushButton *Times;
    QPushButton *Button_5;
    QPushButton *Button_6;
    QPushButton *Minus;
    QPushButton *Button_1;
    QPushButton *Button_2;
    QPushButton *Button_3;
    QPushButton *Plus;
    QPushButton *Button_0;
    QPushButton *Coma;
    QPushButton *Equal;
    QLabel *Display;

    void setupUi(QWidget *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(320, 568);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        Calculator->setMinimumSize(QSize(320, 528));
        Calculator->setMaximumSize(QSize(320, 568));
        Calculator->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color : #000000;\n"
"}\n"
"\n"
"QPushButton{\n"
"	border-radius : 32px;\n"
"	font-size : 30px;\n"
"	padding-bottom:5px;\n"
"	padding-right:1px;\n"
"}\n"
"\n"
"QLabel {\n"
"	border: solid;\n"
"	font-size: 70px;\n"
"	color:#FFFFFF;\n"
"}\n"
"[accessibleName = \"specialOperator\"] {\n"
"	background-color: rgb(136, 136, 136);\n"
"	color: #191919;\n"
"}\n"
"\n"
"[accessibleName = \"operator\"] {\n"
"	background-color: #DD8502;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"[accessibleName = \"digit\"] {\n"
"	background-color: rgb(52, 54, 59);\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"[accessibleName = \"digit\"]::hover {\n"
"	background-color: rgb(103, 107, 112);\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"[accessibleName = \"operator\"]::hover {\n"
"	background-color: #FFC660;\n"
"	color: #FFFFFF;\n"
"}\n"
"\n"
"[accessibleName = \"specialOperator\"]::hover {\n"
"	background-color: rgb(180, 180, 180);\n"
"}"));
        AC = new QPushButton(Calculator);
        AC->setObjectName(QString::fromUtf8("AC"));
        AC->setGeometry(QRect(10, 200, 64, 64));
        plusMinus = new QPushButton(Calculator);
        plusMinus->setObjectName(QString::fromUtf8("plusMinus"));
        plusMinus->setGeometry(QRect(90, 200, 64, 64));
        QFont font;
        plusMinus->setFont(font);
        Percents = new QPushButton(Calculator);
        Percents->setObjectName(QString::fromUtf8("Percents"));
        Percents->setGeometry(QRect(168, 200, 64, 64));
        Divide = new QPushButton(Calculator);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        Divide->setGeometry(QRect(246, 200, 64, 64));
        Button_7 = new QPushButton(Calculator);
        Button_7->setObjectName(QString::fromUtf8("Button_7"));
        Button_7->setGeometry(QRect(10, 274, 64, 64));
        Button_4 = new QPushButton(Calculator);
        Button_4->setObjectName(QString::fromUtf8("Button_4"));
        Button_4->setGeometry(QRect(10, 348, 64, 64));
        Button_8 = new QPushButton(Calculator);
        Button_8->setObjectName(QString::fromUtf8("Button_8"));
        Button_8->setGeometry(QRect(90, 274, 64, 64));
        Button_9 = new QPushButton(Calculator);
        Button_9->setObjectName(QString::fromUtf8("Button_9"));
        Button_9->setGeometry(QRect(168, 274, 64, 64));
        Times = new QPushButton(Calculator);
        Times->setObjectName(QString::fromUtf8("Times"));
        Times->setGeometry(QRect(246, 274, 64, 64));
        Button_5 = new QPushButton(Calculator);
        Button_5->setObjectName(QString::fromUtf8("Button_5"));
        Button_5->setGeometry(QRect(90, 348, 64, 64));
        Button_6 = new QPushButton(Calculator);
        Button_6->setObjectName(QString::fromUtf8("Button_6"));
        Button_6->setGeometry(QRect(168, 348, 64, 64));
        Minus = new QPushButton(Calculator);
        Minus->setObjectName(QString::fromUtf8("Minus"));
        Minus->setGeometry(QRect(246, 348, 64, 64));
        Button_1 = new QPushButton(Calculator);
        Button_1->setObjectName(QString::fromUtf8("Button_1"));
        Button_1->setGeometry(QRect(10, 420, 64, 64));
        Button_2 = new QPushButton(Calculator);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));
        Button_2->setGeometry(QRect(90, 420, 64, 64));
        Button_3 = new QPushButton(Calculator);
        Button_3->setObjectName(QString::fromUtf8("Button_3"));
        Button_3->setGeometry(QRect(168, 420, 64, 64));
        Plus = new QPushButton(Calculator);
        Plus->setObjectName(QString::fromUtf8("Plus"));
        Plus->setGeometry(QRect(246, 420, 64, 64));
        Button_0 = new QPushButton(Calculator);
        Button_0->setObjectName(QString::fromUtf8("Button_0"));
        Button_0->setGeometry(QRect(10, 492, 142, 64));
        Coma = new QPushButton(Calculator);
        Coma->setObjectName(QString::fromUtf8("Coma"));
        Coma->setGeometry(QRect(168, 492, 64, 64));
        Equal = new QPushButton(Calculator);
        Equal->setObjectName(QString::fromUtf8("Equal"));
        Equal->setGeometry(QRect(246, 490, 64, 64));
        Display = new QLabel(Calculator);
        Display->setObjectName(QString::fromUtf8("Display"));
        Display->setEnabled(true);
        Display->setGeometry(QRect(16, 96, 290, 80));
        Display->setLayoutDirection(Qt::LeftToRight);
        Display->setTextFormat(Qt::AutoText);
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(Calculator);
        QObject::connect(Button_1, SIGNAL(clicked()), Calculator, SLOT(addNumber()));
        QObject::connect(Calculator, SIGNAL(changedWord(QString)), Display, SLOT(setText(QString)));
        QObject::connect(Button_2, SIGNAL(clicked()), Calculator, SLOT(addNumber()));
        QObject::connect(Button_3, SIGNAL(clicked()), Calculator, SLOT(addNumber()));
        QObject::connect(Button_4, SIGNAL(clicked()), Calculator, SLOT(addNumber()));
        QObject::connect(Button_5, SIGNAL(clicked()), Calculator, SLOT(addNumber()));
        QObject::connect(Button_6, SIGNAL(clicked()), Calculator, SLOT(addNumber()));
        QObject::connect(Button_7, SIGNAL(clicked()), Calculator, SLOT(addNumber()));
        QObject::connect(Button_8, SIGNAL(clicked()), Calculator, SLOT(addNumber()));
        QObject::connect(Button_9, SIGNAL(clicked()), Calculator, SLOT(addNumber()));
        QObject::connect(Equal, SIGNAL(clicked()), Calculator, SLOT(doOperations()));
        QObject::connect(Button_0, SIGNAL(clicked()), Calculator, SLOT(addNumber()));
        QObject::connect(Times, SIGNAL(clicked()), Calculator, SLOT(selectOperations()));
        QObject::connect(Divide, SIGNAL(clicked()), Calculator, SLOT(selectOperations()));
        QObject::connect(Percents, SIGNAL(clicked()), Calculator, SLOT(selectOperations()));
        QObject::connect(plusMinus, SIGNAL(clicked()), Calculator, SLOT(selectOperations()));
        QObject::connect(Plus, SIGNAL(clicked()), Calculator, SLOT(selectOperations()));
        QObject::connect(Minus, SIGNAL(clicked()), Calculator, SLOT(selectOperations()));
        QObject::connect(AC, SIGNAL(clicked()), Calculator, SLOT(reset()));
        QObject::connect(Coma, SIGNAL(clicked()), Calculator, SLOT(addNumber()));

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QWidget *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
#if QT_CONFIG(accessibility)
        AC->setAccessibleName(QCoreApplication::translate("Calculator", "specialOperator", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        AC->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        AC->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
#if QT_CONFIG(accessibility)
        plusMinus->setAccessibleName(QCoreApplication::translate("Calculator", "specialOperator", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        plusMinus->setAccessibleDescription(QCoreApplication::translate("Calculator", "6", nullptr));
#endif // QT_CONFIG(accessibility)
        plusMinus->setText(QCoreApplication::translate("Calculator", "\302\261", nullptr));
#if QT_CONFIG(accessibility)
        Percents->setAccessibleName(QCoreApplication::translate("Calculator", "specialOperator", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Percents->setAccessibleDescription(QCoreApplication::translate("Calculator", "5", nullptr));
#endif // QT_CONFIG(accessibility)
        Percents->setText(QCoreApplication::translate("Calculator", "%", nullptr));
#if QT_CONFIG(accessibility)
        Divide->setAccessibleName(QCoreApplication::translate("Calculator", "operator", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Divide->setAccessibleDescription(QCoreApplication::translate("Calculator", "4", nullptr));
#endif // QT_CONFIG(accessibility)
        Divide->setText(QCoreApplication::translate("Calculator", "\303\267", nullptr));
#if QT_CONFIG(accessibility)
        Button_7->setAccessibleName(QCoreApplication::translate("Calculator", "digit", nullptr));
#endif // QT_CONFIG(accessibility)
        Button_7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
#if QT_CONFIG(accessibility)
        Button_4->setAccessibleName(QCoreApplication::translate("Calculator", "digit", nullptr));
#endif // QT_CONFIG(accessibility)
        Button_4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
#if QT_CONFIG(accessibility)
        Button_8->setAccessibleName(QCoreApplication::translate("Calculator", "digit", nullptr));
#endif // QT_CONFIG(accessibility)
        Button_8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
#if QT_CONFIG(accessibility)
        Button_9->setAccessibleName(QCoreApplication::translate("Calculator", "digit", nullptr));
#endif // QT_CONFIG(accessibility)
        Button_9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
#if QT_CONFIG(accessibility)
        Times->setAccessibleName(QCoreApplication::translate("Calculator", "operator", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Times->setAccessibleDescription(QCoreApplication::translate("Calculator", "3", nullptr));
#endif // QT_CONFIG(accessibility)
        Times->setText(QCoreApplication::translate("Calculator", "x", nullptr));
#if QT_CONFIG(accessibility)
        Button_5->setAccessibleName(QCoreApplication::translate("Calculator", "digit", nullptr));
#endif // QT_CONFIG(accessibility)
        Button_5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
#if QT_CONFIG(accessibility)
        Button_6->setAccessibleName(QCoreApplication::translate("Calculator", "digit", nullptr));
#endif // QT_CONFIG(accessibility)
        Button_6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
#if QT_CONFIG(accessibility)
        Minus->setAccessibleName(QCoreApplication::translate("Calculator", "operator", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Minus->setAccessibleDescription(QCoreApplication::translate("Calculator", "2", nullptr));
#endif // QT_CONFIG(accessibility)
        Minus->setText(QCoreApplication::translate("Calculator", "-", nullptr));
#if QT_CONFIG(accessibility)
        Button_1->setAccessibleName(QCoreApplication::translate("Calculator", "digit", nullptr));
#endif // QT_CONFIG(accessibility)
        Button_1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
#if QT_CONFIG(accessibility)
        Button_2->setAccessibleName(QCoreApplication::translate("Calculator", "digit", nullptr));
#endif // QT_CONFIG(accessibility)
        Button_2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
#if QT_CONFIG(accessibility)
        Button_3->setAccessibleName(QCoreApplication::translate("Calculator", "digit", nullptr));
#endif // QT_CONFIG(accessibility)
        Button_3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
#if QT_CONFIG(accessibility)
        Plus->setAccessibleName(QCoreApplication::translate("Calculator", "operator", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Plus->setAccessibleDescription(QCoreApplication::translate("Calculator", "1", nullptr));
#endif // QT_CONFIG(accessibility)
        Plus->setText(QCoreApplication::translate("Calculator", "+", nullptr));
#if QT_CONFIG(accessibility)
        Button_0->setAccessibleName(QCoreApplication::translate("Calculator", "digit", nullptr));
#endif // QT_CONFIG(accessibility)
        Button_0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
#if QT_CONFIG(accessibility)
        Coma->setAccessibleName(QCoreApplication::translate("Calculator", "digit", nullptr));
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        Coma->setAccessibleDescription(QCoreApplication::translate("Calculator", "7", nullptr));
#endif // QT_CONFIG(accessibility)
        Coma->setText(QCoreApplication::translate("Calculator", ",", nullptr));
#if QT_CONFIG(accessibility)
        Equal->setAccessibleName(QCoreApplication::translate("Calculator", "operator", nullptr));
#endif // QT_CONFIG(accessibility)
        Equal->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        Display->setText(QCoreApplication::translate("Calculator", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
