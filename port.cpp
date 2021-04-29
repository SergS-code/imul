#include "port.h"

port::port( )
{

         serialPort=new QSerialPort();
       // указали имя к какому порту будем подключаться
       serialPort->setPortName("COM3");
       // указали скорость
       serialPort->setBaudRate(QSerialPort::Baud9600);

       // пробуем подключится
       if (!serialPort->open(QIODevice::ReadWrite)) {
           // если подключится не получится, то покажем сообщение с ошибкой
qDebug()<<" problema with COM port";           return;
       }


       MainWindow* instance= MainWindow::GetInstance();

             connect (serialPort,SIGNAL(readyRead()),this,SLOT(serialRecieve()));

             connect (this,SIGNAL (command_s(parameter)),instance,SLOT(razbor_com(parameter)));
             connect (instance,SIGNAL(s_send_to(QByteArray)),this,SLOT(send_to(QByteArray)));

    qDebug()<<"**************************************";
    start();


}

port::~port()
{

}

void port::run(){




}

void port::serialRecieve()
{


    QByteArray ba;
    ba=serialPort->readAll();
    qDebug()<<ba;
    packet B(ba);
     for(int i=0;i<B.parameters.count();i++)
    emit command_s(B.parameters[i]);




}


void port::send_to(QByteArray TO)
{


    if(serialPort->isOpen()){

            qDebug()<<serialPort->write(TO.data(),TO.size());
        }



}
