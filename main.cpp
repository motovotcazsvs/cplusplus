#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "plusp.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    //Q_INVOKABLE void funcHut();

    QQmlContext* ctx = engine.rootContext();
    Plusp dt;
    ctx->setContextProperty("ingh", &dt);


    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
