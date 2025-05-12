#include <QtWidgets/QApplication>
#include "./Connector_Classes/LoginWindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    LoginWindow window;
    window.show();

    return app.exec();
}
