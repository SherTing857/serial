#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSerialPort>
#include <QString>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    QSerialPort *serialPort;

private slots:
    void on_openPb_clicked();

    void on_closePb_clicked();

    void serialPortReadyRead_Slot();

    void on_sendPb_clicked();

    void on_clearPb_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
