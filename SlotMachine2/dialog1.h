#ifndef REEL2_H
#define REEL2_H

#include <QDialog>
#include <QDebug>
#include <QtConcurrent>
#include<slotmachine.h>

namespace Ui {

class Dialog;
}
class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog (QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_PULLButton_clicked();
public slots:
    void newNumber(QString name, unsigned int num);


private:
    Ui::Dialog *ui;
    slotmachine rng;

};

#endif // REEL2_H
