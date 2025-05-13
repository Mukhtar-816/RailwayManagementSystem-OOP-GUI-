#include <QtWidgets/QApplication>
#include "./Connector_Classes/SignUpWindow.h"
#include "./Connector_Classes/LoginWindow.h"
#include "./Connector_Classes/UserDashboardWindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // LoginWindow loginWindow;
    // SignupWindow signupWindow;
    UserDashboardWindow dashboardWindow;

    // // When login is successful
    // QObject::connect(&loginWindow, &LoginWindow::loginSuccess, [&]() {
    //     loginWindow.hide();
    //     dashboardWindow.show();
    // });

    // // When "Create Account" is clicked
    // QObject::connect(&loginWindow, &LoginWindow::openSignup, [&]() {
    //     dashboardWindow.show();
    //     loginWindow.hide();
    //     signupWindow.show();
    // });

    // // When signup is successful
    // QObject::connect(&signupWindow, &SignupWindow::signupSuccess, [&]() {
    //     signupWindow.hide();
    //     loginWindow.show();
    // });

    // // When "Already have account" is clicked
    // QObject::connect(&signupWindow, &SignupWindow::openLogin, [&]() {
    //     signupWindow.hide();
    //     loginWindow.show();
    // });

    // // Optional: logout from dashboard
    // QObject::connect(&dashboardWindow, &UserDashboardWindow::logoutRequested, [&]() {
    //     dashboardWindow.hide();
    //     loginWindow.show();
    // });

    // // Start with login window
    // loginWindow.show();

    UserDashboardWindow window;
    window.show();

    return app.exec();
}
