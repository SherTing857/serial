#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
//#include <QtSerialPort/QSerialPortInfo>
#include <QSerialPortInfo>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QStringList serialNamePort;

    serialPort = new QSerialPort(this);

    connect(serialPort,SIGNAL(readyRead()),this,SLOT(serialPortReadyRead_Slot));

    //QSerialPortInfo 串口信息类，存放串口信息
    //QSerialPortInfo::availablePorts()自动搜索当前可用串口，返回一个数组，数组元素是QSerialPortInfo类型
    foreach (const QSerialPortInfo &info ,QSerialPortInfo::availablePorts())
    {
        serialNamePort<<info.portName();//把返回值赋值到serialNamePort
    }
    ui->serialCb->addItems(serialNamePort);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::serialPortReadyRead_Slot()
{
    QString buf;
    buf = QString(serialPort->readAll());
    ui->recvEdit->appendPlainText(buf);
}


//ui界面点打开，进行如下串口初始化
void Widget::on_openPb_clicked()
{
    //定义串口属性变量
    QSerialPort::BaudRate bauRate;
    QSerialPort::DataBits dataBits;
    QSerialPort::StopBits stopBits;
    QSerialPort::Parity checkBits;

    //将ui界面选择的属性值赋给变量
    //波特率
    if(ui->baudrateCb->currentText() == "4800")
    {
        bauRate = QSerialPort::Baud4800;
    }
    else if(ui->baudrateCb->currentText() == "9600")
    {
        bauRate = QSerialPort::Baud9600;
    }
    else if(ui->baudrateCb->currentText() == "115200")
    {
        bauRate = QSerialPort::Baud115200;
    }
    else if(ui->baudrateCb->currentText() == "38400")
    {
        bauRate = QSerialPort::Baud38400;
    }

    //数据位
    if(ui->dataCb->currentText() == "5")
    {
        dataBits = QSerialPort::Data5;
    }
    else if(ui->dataCb->currentText() == "6")
    {
        dataBits = QSerialPort::Data6;
    }
    else if(ui->dataCb->currentText() == "7")
    {
        dataBits = QSerialPort::Data7;
    }
    else if(ui->dataCb->currentText() == "8")
    {
        dataBits = QSerialPort::Data8;
    }
    //停止位
    if(ui->stopCb->currentText() == "1")
    {
        stopBits = QSerialPort::OneStop;
    }
    else if(ui->stopCb->currentText() == "1.5")
    {
        stopBits = QSerialPort::OneAndHalfStop;//具体名字在帮助里搜QSerialPort
    }
    else if(ui->stopCb->currentText() == "2")
    {
        stopBits = QSerialPort::TwoStop;
    }
    //校验位
    if(ui->checkCb->currentText() == "none")
    {
        checkBits = QSerialPort::NoParity;
    }

    //给串口设置属性
    serialPort->setPortName(ui->serialCb->currentText());
    //视频原语句serialPort->setPort(ui->serialCb->currentText());
    serialPort->setBaudRate(bauRate);
    serialPort->setDataBits(dataBits);
    serialPort->setStopBits(stopBits);
    serialPort->setParity(checkBits);

    //判断串口是否打开成功
    if(serialPort->open(QIODevice::ReadWrite) == true)
    {
        //出现一个框显示打开串口成功或失败
        QMessageBox::information(this,"提示","成功");
    }
    else
    {
        QMessageBox::critical(this,"提示","失败");
    }
}

void Widget::on_closePb_clicked()
{
    serialPort->close();
}

void Widget::on_sendPb_clicked()
{
    serialPort->write(ui->sendEdit->text().toLocal8Bit().data());
}

void Widget::on_clearPb_clicked()
{
    ui->recvEdit->clear();
}
