#ifndef BET_1_H
#define BET_1_H

#include <QObject>
#include <QDebug>
#include <QThread>


class bet_1 : public QObject
{
    Q_OBJECT
public:
    explicit bet_1(QObject *parent = 0);

    void start(QString name);
signals:
    void onTotal (QString name, unsigned int total);
public slots:

private:
//public:
  unsigned int CreateNewTotal ();


};

#endif // BET_1_H
