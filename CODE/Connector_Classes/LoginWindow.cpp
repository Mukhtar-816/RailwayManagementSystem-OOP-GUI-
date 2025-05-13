#include "LoginWindow.h"
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

void LoginWindow::onLoginClicked() {
    QString username = ui.lineEdit_username->text();
    QString password = ui.lineEdit_password->text();

    bool success = Authenticator.login(username.toStdString(), password.toStdString());

    if (success) {
        QMessageBox::information(this, "Login", "Login successful!");
        // You can emit a signal here or open another window
        Sleep(1000);
        // emit loginSuccess();
    } else {
        QMessageBox::warning(this, "Login", "Invalid credentials.");
    }
}

void LoginWindow::onCreateAccountClicked() {
        // Open your sign-up form here if needed
}
