/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_username_ID
{
public:
    QWidget *centralwidget;
    QLabel *instrution;
    QLabel *temporizador;
    QFrame *frame;
    QPushButton *card_1;
    QPushButton *card_2;
    QPushButton *card_3;
    QPushButton *card_4;
    QPushButton *card_5;
    QPushButton *card_6;
    QPushButton *card_7;
    QPushButton *card_8;
    QPushButton *card_9;
    QPushButton *card_10;
    QPushButton *card_11;
    QPushButton *card_12;
    QLabel *score_pt;
    QLabel *points_number;
    QLineEdit *user_name;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *username_ID)
    {
        if (username_ID->objectName().isEmpty())
            username_ID->setObjectName(QString::fromUtf8("username_ID"));
        username_ID->resize(850, 600);
        username_ID->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"background-image: url(:/CardImages/fondoNaranja.png);\n"
"}\n"
"#instrution{\n"
"color: black;\n"
"}\n"
"#temporizador{\n"
"color: black;\n"
"}\n"
"#score_pt{\n"
"color:black;\n"
"}\n"
"#points_number{\n"
"color:black;\n"
"qproperty-alignment: AlignCenter;\n"
"}\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(username_ID);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        instrution = new QLabel(centralwidget);
        instrution->setObjectName(QString::fromUtf8("instrution"));
        instrution->setGeometry(QRect(10, 10, 41, 16));
        QFont font;
        font.setBold(true);
        instrution->setFont(font);
        temporizador = new QLabel(centralwidget);
        temporizador->setObjectName(QString::fromUtf8("temporizador"));
        temporizador->setGeometry(QRect(700, 10, 37, 12));
        temporizador->setFont(font);
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 50, 661, 481));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        card_1 = new QPushButton(frame);
        card_1->setObjectName(QString::fromUtf8("card_1"));
        card_1->setGeometry(QRect(60, 20, 90, 80));
        card_2 = new QPushButton(frame);
        card_2->setObjectName(QString::fromUtf8("card_2"));
        card_2->setGeometry(QRect(180, 20, 90, 80));
        card_3 = new QPushButton(frame);
        card_3->setObjectName(QString::fromUtf8("card_3"));
        card_3->setGeometry(QRect(300, 20, 90, 80));
        card_4 = new QPushButton(frame);
        card_4->setObjectName(QString::fromUtf8("card_4"));
        card_4->setGeometry(QRect(420, 20, 90, 80));
        card_5 = new QPushButton(frame);
        card_5->setObjectName(QString::fromUtf8("card_5"));
        card_5->setGeometry(QRect(60, 150, 90, 80));
        card_6 = new QPushButton(frame);
        card_6->setObjectName(QString::fromUtf8("card_6"));
        card_6->setGeometry(QRect(180, 150, 90, 80));
        card_7 = new QPushButton(frame);
        card_7->setObjectName(QString::fromUtf8("card_7"));
        card_7->setGeometry(QRect(300, 150, 90, 80));
        card_8 = new QPushButton(frame);
        card_8->setObjectName(QString::fromUtf8("card_8"));
        card_8->setGeometry(QRect(420, 150, 90, 80));
        card_9 = new QPushButton(frame);
        card_9->setObjectName(QString::fromUtf8("card_9"));
        card_9->setGeometry(QRect(60, 280, 90, 80));
        card_10 = new QPushButton(frame);
        card_10->setObjectName(QString::fromUtf8("card_10"));
        card_10->setGeometry(QRect(180, 280, 90, 80));
        card_11 = new QPushButton(frame);
        card_11->setObjectName(QString::fromUtf8("card_11"));
        card_11->setGeometry(QRect(300, 280, 90, 80));
        card_12 = new QPushButton(frame);
        card_12->setObjectName(QString::fromUtf8("card_12"));
        card_12->setGeometry(QRect(420, 280, 90, 80));
        score_pt = new QLabel(centralwidget);
        score_pt->setObjectName(QString::fromUtf8("score_pt"));
        score_pt->setGeometry(QRect(30, 550, 101, 20));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        score_pt->setFont(font1);
        score_pt->setStyleSheet(QString::fromUtf8("black"));
        points_number = new QLabel(centralwidget);
        points_number->setObjectName(QString::fromUtf8("points_number"));
        points_number->setGeometry(QRect(160, 550, 20, 21));
        points_number->setFont(font1);
        points_number->setLayoutDirection(Qt::LeftToRight);
        user_name = new QLineEdit(centralwidget);
        user_name->setObjectName(QString::fromUtf8("user_name"));
        user_name->setGeometry(QRect(80, 10, 113, 20));
        username_ID->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(username_ID);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        username_ID->setStatusBar(statusbar);

        retranslateUi(username_ID);

        QMetaObject::connectSlotsByName(username_ID);
    } // setupUi

    void retranslateUi(QMainWindow *username_ID)
    {
        username_ID->setWindowTitle(QCoreApplication::translate("username_ID", "MainWindow", nullptr));
        instrution->setText(QCoreApplication::translate("username_ID", "Nombre", nullptr));
        temporizador->setText(QCoreApplication::translate("username_ID", "Tiempo", nullptr));
        card_1->setText(QString());
        card_2->setText(QString());
        card_3->setText(QString());
        card_4->setText(QString());
        card_5->setText(QString());
        card_6->setText(QString());
        card_7->setText(QString());
        card_8->setText(QString());
        card_9->setText(QString());
        card_10->setText(QString());
        card_11->setText(QString());
        card_12->setText(QString());
        score_pt->setText(QCoreApplication::translate("username_ID", "Puntuaci\303\263n:", nullptr));
        points_number->setText(QCoreApplication::translate("username_ID", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class username_ID: public Ui_username_ID {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
