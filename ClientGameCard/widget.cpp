#include "widget.h"
#include "./ui_widget.h"
#include "QTcpServer"
#include "qtcpsocket.h"
#include "cardsocketgamedialog.h"
#include <QTextStream>
#include <mainwindow.h>
#include "./ui_mainwindow.h"



Widget::Widget(QWidget *parent):QWidget(parent)
  , ui(new Ui::Widget)
{
    ui->setupUi(this);
    cardSockets = new QTcpSocket(this);
    connect(cardSockets, &QTcpSocket::readyRead, [&](){
        QTextStream T(cardSockets);
        auto text = T.readAll();
        ui->textEdit->append(text);
    });

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_send_clicked()
{
    QTextStream T(cardSockets);
    T << ui->username->text() <<": has connected" ;

    ui->username->setDisabled(true);
    cardSockets->flush();
    ui->message->clear();
}


void Widget::on_bind_clicked()
{
    CardSocketGameDialog D(this);
    if (D.exec() == QDialog::Rejected){
    }
    cardSockets->connectToHost(D.hostname(),D.port());

}

void Widget::on_startGam_clicked()
{
    nw->setEnabled(true);
    nw->show();
}




