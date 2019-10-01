#include "slotmachine.h"
#include <QThread>
#include<functional>
#include<QRandomGenerator>
#include <QFuture>
#include<QtConcurrent>



slotmachine::slotmachine ()
{
    slot_value= 0;
}

int slotmachine:: ret_slot()
{
    return slot_value;
}

QChar slotmachine:: ret_char()
{
    return VSlot[slot_value];
}

void slotmachine :: slot_gen()
{
qDebug()<< "STarting rng:"<< QThread::currentThread();
          slot_value= (QRandomGenerator::global()->generate())%7;
qDebug()<<slot_value;
}
