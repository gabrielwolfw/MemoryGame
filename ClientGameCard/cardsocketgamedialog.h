#ifndef CARDSOCKETGAMEDIALOG_H
#define CARDSOCKETGAMEDIALOG_H

#include <QDialog>

namespace Ui {
class CardSocketGameDialog;
}

class CardSocketGameDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CardSocketGameDialog(QWidget *parent = nullptr);
    ~CardSocketGameDialog();
    QString hostname() const;
    quint16 port() const;


private slots:
    void on_ok_clicked();

    void on_cancel_clicked();


private:
    Ui::CardSocketGameDialog *ui;
    QString cardHostname;
    quint16 cardPort;



};

inline QString CardSocketGameDialog::hostname() const
{
    return cardHostname;
}

inline quint16 CardSocketGameDialog::port() const
{
    return cardPort;
}

#endif // CARDSOCKETGAMEDIALOG_H
