#include "reel2.h"
#include <QTime>
#include <QDebug>

reel2::reel2 (QObject *parent) : QObject(parent)
{

}
void reel2::start(QString name)
{
    emit onNumber(name, CreateRandomNumber());
}

unsigned int reel2::CreateRandomNumber()
{
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());

    for (int i=0; i< (qrand()% 1000); i++)
    {
        qDebug()<< "Sequencing Random Number, count" << i << " : "<< qrand();
    }

    return qrand();

}
