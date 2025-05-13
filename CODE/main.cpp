#include <QtWidgets/QApplication>
// #include "./Connector_Classes/SignUpWindow.h"
#include "./Connector_Classes/LoginWindow.h"
// #include "./Connector_Classes/UserDashboardWindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    LoginWindow loginWindow;
    loginWindow.show(); //first Window

    return app.exec();
}
