#include "SignupWindow.h"
#include "LoginWindow.h"
#include "windows.h"
#include <QtWidgets/QMessageBox>

SignupWindow::SignupWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    connect(ui.pushButton_signup, &QPushButton::clicked, this, &SignupWindow::onSignupClicked);
    connect(ui.pushButton_login, &QPushButton::clicked, this, &SignupWindow::onLoginButtonClicked);
}

SignupWindow::~SignupWindow() {}

void SignupWindow::onSignupClicked()
{
    QString username = ui.lineEdit_username->text();
    QString password = ui.lineEdit_password->text();
    QString confirm = ui.lineEdit_confirm->text();

    if (username.isEmpty() || password.isEmpty() || confirm.isEmpty())
    {
        QMessageBox::warning(this, "Error", "Please fill in all fields.");
        return;
    }

    if (password != confirm)
    {
        QMessageBox::warning(this, "Error", "Passwords do not match.");
        return;
    }

    std::string res = authenticator.signup(username.toStdString(), password.toStdString(), confirm.toStdString());

    if (res == "Success")
    {
        QMessageBox::information(this, "Success", "Account created successfully!");
        Sleep(800);
        LoginWindow *loginWindow = new LoginWindow();
        loginWindow->show();
        this->close();
    }
    else
    {
        QMessageBox::warning(this, "Error", QString::fromStdString(res));
    }
}

void SignupWindow::onLoginButtonClicked()
{
    LoginWindow *loginWindow = new LoginWindow();
    loginWindow->show();
    this->close(); // close current signup window
}