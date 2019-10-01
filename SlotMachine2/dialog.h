#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDebug>
#include <QtConcurrent>
#include<slotmachine.h>
#include<bet_1.h>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    int retamt(int*);

private slots:

public slots:
    void insertCoin();
    void slotPull();
    void update_slot_dis1();
    void update_slot_dis2();
    void update_slot_dis3();


private:
    int cointamnt, betamnt;
    slotmachine slot1;
    slotmachine slot2;
    slotmachine slot3;
    Ui::Dialog *ui;


};


#endif // DIALOG_H
