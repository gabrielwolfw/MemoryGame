#include "cardsocketgamedialog.h"
#include "ui_cardsocketgamedialog.h"
#include "widget.h"
#include <mainwindow.h>

CardSocketGameDialog::CardSocketGameDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CardSocketGameDialog)
{
    ui->setupUi(this);
}

CardSocketGameDialog::~CardSocketGameDialog()
{
    delete ui;
}

void CardSocketGameDialog::on_ok_clicked()
{
    cardHostname = ui->hostname->text();
    cardPort = ui->port->value();
    accept();
}


void CardSocketGameDialog::on_cancel_clicked()
{
    reject();
}

