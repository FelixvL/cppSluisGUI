#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlEngine>
#include <QQmlContext>
#include "game.h"


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QScopedPointer<Game> game(new Game);


    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    engine.rootContext()->setContextProperty("game",game.data());
    return app.exec();
}
