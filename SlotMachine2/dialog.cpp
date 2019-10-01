#include "dialog.h"

#include "ui_dialog.h"
#include<QFutureWatcher>
#include<QtConcurrent>
using namespace QtConcurrent;

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    setup_Slot();
    ui->setupUi(this);

    connect(ui->bet1,SIGNAL(clicked()), this, SLOT (insertCoint());
    connect(ui->PULLButton, SIGNAL(clicked()), this, SLOT(slotPull);

 }

void Dialog::update_slot_dis1()
{
ui->reel1->settext(slot1.ret_char());
}

void Dialog::update_slot_dis2()
{
ui->reel2->settext(slo2.ret_char());
}

void Dialog::update_slot_dis3()
{
ui->reel3->settext(slot3.ret_char());
}

void Dialog::slotPull()
{
    qDebug()<<"pull new bet";
    QFutureWatcher <void> watcher1;
    QFuture<void> t1= QtConcurrent::run([=](){slot1.slot_gen();});

    QFutureWatcher <void> watcher2;
    QFuture<void> t2= QtConcurrent::run([=](){slot2.slot_gen();});

    QFutureWatcher <void> watcher3;
    QFuture<void> t3= QtConcurrent::run([=](){slot3.slot_gen();});

    QEventLoop loop;

    connect(&watcher1,SIGNAL(finished()),&loop, SLOT(quit()), Qt::QueuedConnection);
    connect(&watcher2,SIGNAL(finished()),&loop, SLOT(quit()), Qt::QueuedConnection);
    connect(&watcher3,SIGNAL(finished()),&loop, SLOT(quit()), Qt::QueuedConnection);

}
