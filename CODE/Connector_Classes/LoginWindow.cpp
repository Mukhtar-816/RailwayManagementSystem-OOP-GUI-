#include "LoginWindow.h"
#include "UserDashboardWindow.h"
#include "SignUpWindow.h"
#include "windows.h"
#include <QtWidgets/QMessageBox>

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    // Connect buttons to slots
    connect(ui.pushButton, &QPushButton::clicked, this, &LoginWindow::onLoginClicked);
    connect(ui.pushButton_2, &QPushButton::clicked, this, &LoginWindow::onCreateAccountClicked);
}

LoginWindow::~LoginWindow() {}

void LoginWindow::onLoginClicked()
{
    QString username = ui.lineEdit_username->text();
    QString password = ui.lineEdit_password->text();

    std::string res = Authenticator.login(username.toStdString(), password.toStdString());

    if (res == "Success")
    {
        QMessageBox::information(this, "Login", "Login successful!");
        Sleep(800);
        UserDashboardWindow *dashboardWindow = new UserDashboardWindow();
        dashboardWindow->show();
        this->close(); // Close login window
    }
    else
    {
        QMessageBox::warning(this, "Login", QString::fromStdString(res));
    }
}

void LoginWindow::onCreateAccountClicked()
{
    Sleep(800);
    SignupWindow *signupWindow = new SignupWindow();
    signupWindow->show();
    this->close();
}
