#include "bet_1.h"

#include <QTime>
#include <QDebug>

bet_1::bet_1 (QObject *parent) : QObject(parent)
{

}
void bet_1::start(QString name)
{
    emit onTotal(name, CreateNewTotal());
}

unsigned int bet_1::CreateNewTotal()
{
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());

    int m=1;
    m= m+(qrand()% 7);



    return m;
}
