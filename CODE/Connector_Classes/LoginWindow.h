#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QtWidgets/QMainWindow>
#include "../UIClasses/login.h"    // Make sure you include this after running uic on the .ui file
#include "../Logic_classes/Login.Logic.h"   // Logic class for authentication

class LoginWindow : public QMainWindow {
    Q_OBJECT

public:
    LoginWindow(QWidget *parent = nullptr);  // Constructor declaration
    ~LoginWindow();                         // Destructor declaration

private slots:
    void onLoginClicked();
    void onCreateAccountClicked();

private:
    Ui::MainWindow ui;
    LoginLogic logic;
};

#endif // LOGINWINDOW_H
