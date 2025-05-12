#ifndef SIGNUPWINDOW_H
#define SIGNUPWINDOW_H

#include <QtWidgets/QMainWindow>
#include "../UIClasses/signup.h"
#include "../Logic_classes/SystemManager.h"  // For AuthenticationManager

class SignupWindow : public QMainWindow {
    Q_OBJECT

public:
    SignupWindow(QWidget *parent = nullptr);
    ~SignupWindow();

private slots:
    void onSignupClicked();

private:
    Ui::SignupWindow ui;
    AuthenticationManager authenticator;
};

#endif // SIGNUPWINDOW_H
