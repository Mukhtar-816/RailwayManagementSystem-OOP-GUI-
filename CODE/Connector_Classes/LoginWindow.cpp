#include "LoginWindow.h"
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
    bool isAdmin = ui.checkBox->isChecked();

    bool success = logic.authenticate(username.toStdString(), password.toStdString(), isAdmin);

    if (success) {
        QMessageBox::information(this, "Login", "Login successful!");
        // You can emit a signal here or open another window
    } else {
        QMessageBox::warning(this, "Login", "Invalid credentials.");
    }
}

void LoginWindow::onCreateAccountClicked() {
    QMessageBox::information(this, "Sign Up", "Sign-up window not implemented yet.");
    // Open your sign-up form here if needed
}
