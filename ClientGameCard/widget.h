#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
#include <mainwindow.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE


class QTcpSocket;



class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    MainWindow *nw = new MainWindow();



private slots:
    void on_send_clicked();

    void on_bind_clicked();

    void on_startGam_clicked();

private:
    Ui::Widget *ui;
    QTcpSocket *cardSockets;

};
#endif // WIDGET_H
