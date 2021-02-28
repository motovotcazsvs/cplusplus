#include "plusp.h"


Plusp::Plusp()
{

}

void Plusp::funcHut()
{
    //system("shutdown -r -t 0");
    qDebug("peredaetsia funcia");

    player = new QMediaPlayer;
    //mediaPlayerError = new QMediaPlayer;
    player->setMedia(QUrl("https://air2.radiorecord.ru:9002/rr_128"));
    player->setVolume(100);
    player->play();
}
