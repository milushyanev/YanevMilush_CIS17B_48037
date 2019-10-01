#ifndef REEL2_H
#define REEL2_H

#include <QObject>
#include <QDebug>
#include <QThread>

class reel2 : public QObject
{
    Q_OBJECT
public:
    explicit reel2(QObject *parent = 0);

    void start(QString);
signals:
    void onNumber (QString name, unsigned int num);
public slots:

private:
//public:
  unsigned int CreateRandomNumber ();

};

#endif // REEL2_H
