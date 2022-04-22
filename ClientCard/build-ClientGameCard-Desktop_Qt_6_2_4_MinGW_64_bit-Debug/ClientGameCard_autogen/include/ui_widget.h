/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *message;
    QPushButton *bind;
    QPushButton *send;
    QLineEdit *username;
    QLabel *label;
    QPushButton *startGame;
    QTextEdit *textEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(400, 300);
        message = new QLineEdit(Widget);
        message->setObjectName(QString::fromUtf8("message"));
        message->setGeometry(QRect(30, 240, 113, 20));
        bind = new QPushButton(Widget);
        bind->setObjectName(QString::fromUtf8("bind"));
        bind->setGeometry(QRect(290, 240, 80, 18));
        send = new QPushButton(Widget);
        send->setObjectName(QString::fromUtf8("send"));
        send->setGeometry(QRect(210, 240, 80, 18));
        username = new QLineEdit(Widget);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(100, 10, 113, 20));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 61, 16));
        QFont font;
        font.setBold(true);
        label->setFont(font);
        startGame = new QPushButton(Widget);
        startGame->setObjectName(QString::fromUtf8("startGame"));
        startGame->setGeometry(QRect(250, 270, 80, 21));
        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 50, 331, 161));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        bind->setText(QCoreApplication::translate("Widget", "Conectar", nullptr));
        send->setText(QCoreApplication::translate("Widget", "Enviar", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Usuario", nullptr));
        startGame->setText(QCoreApplication::translate("Widget", "Jugar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
