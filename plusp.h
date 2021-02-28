#ifndef PLUSP_H
#define PLUSP_H

#include <QObject>
#include <QMediaPlayer>


class Plusp : public QObject
{
    Q_OBJECT
public:
    Plusp();
    Q_INVOKABLE void funcHut();

public slots:
    //void funcHut();

private:
    QMediaPlayer *player;
};

#endif // PLUSP_H
