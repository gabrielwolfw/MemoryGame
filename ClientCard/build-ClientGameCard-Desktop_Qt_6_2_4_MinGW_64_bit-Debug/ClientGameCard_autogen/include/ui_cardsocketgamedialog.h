/********************************************************************************
** Form generated from reading UI file 'cardsocketgamedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDSOCKETGAMEDIALOG_H
#define UI_CARDSOCKETGAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_CardSocketGameDialog
{
public:
    QLineEdit *hostname;
    QSpinBox *port;
    QLabel *label;
    QLabel *label_2;
    QPushButton *ok;
    QPushButton *cancel;

    void setupUi(QDialog *CardSocketGameDialog)
    {
        if (CardSocketGameDialog->objectName().isEmpty())
            CardSocketGameDialog->setObjectName(QString::fromUtf8("CardSocketGameDialog"));
        CardSocketGameDialog->resize(382, 186);
        hostname = new QLineEdit(CardSocketGameDialog);
        hostname->setObjectName(QString::fromUtf8("hostname"));
        hostname->setGeometry(QRect(90, 30, 97, 22));
        port = new QSpinBox(CardSocketGameDialog);
        port->setObjectName(QString::fromUtf8("port"));
        port->setGeometry(QRect(90, 70, 81, 22));
        port->setMaximum(99999);
        label = new QLabel(CardSocketGameDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 19, 22));
        label_2 = new QLabel(CardSocketGameDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 70, 41, 21));
        ok = new QPushButton(CardSocketGameDialog);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(210, 150, 80, 18));
        cancel = new QPushButton(CardSocketGameDialog);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(290, 150, 80, 18));

        retranslateUi(CardSocketGameDialog);

        QMetaObject::connectSlotsByName(CardSocketGameDialog);
    } // setupUi

    void retranslateUi(QDialog *CardSocketGameDialog)
    {
        CardSocketGameDialog->setWindowTitle(QCoreApplication::translate("CardSocketGameDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("CardSocketGameDialog", "Host", nullptr));
        label_2->setText(QCoreApplication::translate("CardSocketGameDialog", "Port", nullptr));
        ok->setText(QCoreApplication::translate("CardSocketGameDialog", "Aceptar", nullptr));
        cancel->setText(QCoreApplication::translate("CardSocketGameDialog", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CardSocketGameDialog: public Ui_CardSocketGameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDSOCKETGAMEDIALOG_H
