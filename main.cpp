#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlEngine>
#include <QQmlContext>
#include "guipaneel.h"


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QScopedPointer<GUIPaneel> guipaneel(new GUIPaneel);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    engine.rootContext()->setContextProperty("guipaneel",guipaneel.data());
    return app.exec();
}
