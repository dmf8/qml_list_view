#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "list_model_1.h"
#include "list_model_2.h"

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    List_Model_1* model1 = new List_Model_1;
    engine.rootContext()->setContextProperty("model1", model1);

    List_Model_2* model2 = new List_Model_2;
    engine.rootContext()->setContextProperty("model2", model2);

    return app.exec();
}
