#ifndef SLOTMACHINE_H
#define SLOTMACHINE_H

#include <QObject>
#include <QDebug>
#include <QThread>
#include <QtWidgets>
#include<QtConcurrent>

class slotmachine : public QThread
{
    Q_OBJECT
public:
    slotmachine();
    void slot_gen();

    int ret_slot();
    QChar ret_char();

private:

int slot_value;
const QVector<QChar> VSlot= {'G','A','B','C','D','E','F'};

};

#endif // SLOTMACHINE_H
