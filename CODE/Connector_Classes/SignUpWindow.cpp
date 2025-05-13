#include "SignupWindow.h"
#include <QtWidgets/QMessageBox>

SignupWindow::SignupWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    connect(ui.pushButton_signup, &QPushButton::clicked, this, &SignupWindow::onSignupClicked);
}

SignupWindow::~SignupWindow() {}

void SignupWindow::onSignupClicked() {
    QString username = ui.lineEdit_username->text();
    QString password = ui.lineEdit_password->text();
    QString confirm = ui.lineEdit_confirm->text();

    if (username.isEmpty() || password.isEmpty() || confirm.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please fill in all fields.");
        return;
    }

    if (password != confirm) {
        QMessageBox::warning(this, "Error", "Passwords do not match.");
        return;
    }

    bool result = authenticator.signup(username.toStdString(), password.toStdString(), confirm.toStdString());

    if (result) {
        QMessageBox::information(this, "Success", "Account created successfully!");
        this->close(); // Or redirect to login
        // emit openLogin();
    } else {
        QMessageBox::warning(this, "Error", "Error Creating Account.");
    }
}
