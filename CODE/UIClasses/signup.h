/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SIGNUP_H
#define SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignupWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_username;
    QPushButton *pushButton_signup;
    QLabel *label_loginText;
    QPushButton *pushButton_login;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_confirm;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SignupWindow)
    {
        if (SignupWindow->objectName().isEmpty())
            SignupWindow->setObjectName(QStringLiteral("SignupWindow"));
        SignupWindow->resize(1062, 721);
        SignupWindow->setMinimumSize(QSize(1062, 721));
        SignupWindow->setMaximumSize(QSize(1062, 721));
        SignupWindow->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(SignupWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 60, 1061, 51));
        label->setStyleSheet(QStringLiteral("color:#fff; font-size:30px; font-weight:bold;"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 170, 1061, 51));
        label_2->setStyleSheet(QStringLiteral("color:#fff; font-size:30px; font-weight:bold;"));
        label_2->setAlignment(Qt::AlignCenter);
        lineEdit_username = new QLineEdit(centralwidget);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(400, 270, 261, 40));
        lineEdit_username->setStyleSheet(QLatin1String("\n"
"QLineEdit {\n"
"    padding: 10px;\n"
"    border: 2px solid #ddd;\n"
"    border-radius: 10px;\n"
"    background-color: #ffffffcc;\n"
"    font-size: 16px;\n"
"}\n"
"QLineEdit:hover {\n"
"    border-color: #5cadff;\n"
"}\n"
"QLineEdit:focus {\n"
"    border-color: #1a73e8;\n"
"    background-color: #ffffff;\n"
"}\n"
"     "));
        pushButton_signup = new QPushButton(centralwidget);
        pushButton_signup->setObjectName(QStringLiteral("pushButton_signup"));
        pushButton_signup->setGeometry(QRect(460, 450, 130, 40));
        pushButton_signup->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    background-color: #1a73e8;\n"
"    color: white;\n"
"    border-radius: 8px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #1669c1;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #0d47a1;\n"
"}\n"
"     "));
        label_loginText = new QLabel(centralwidget);
        label_loginText->setObjectName(QStringLiteral("label_loginText"));
        label_loginText->setGeometry(QRect(400, 540, 171, 21));
        label_loginText->setStyleSheet(QStringLiteral("color:#fff; font-size:15px;"));
        label_loginText->setAlignment(Qt::AlignCenter);
        pushButton_login = new QPushButton(centralwidget);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setGeometry(QRect(570, 540, 90, 25));
        pushButton_login->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"    background-color: transparent;\n"
"    color: #1a73e8;\n"
"    border: none;\n"
"    font-size: 14px;\n"
"    text-decoration: underline;\n"
"}\n"
"QPushButton:hover {\n"
"    color: #0d47a1;\n"
"}\n"
"     "));
        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(400, 320, 261, 40));
        lineEdit_password->setStyleSheet(QLatin1String("\n"
"QLineEdit {\n"
"    padding: 10px;\n"
"    border: 2px solid #ddd;\n"
"    border-radius: 10px;\n"
"    background-color: #ffffffcc;\n"
"    font-size: 16px;\n"
"}\n"
"QLineEdit:hover {\n"
"    border-color: #5cadff;\n"
"}\n"
"QLineEdit:focus {\n"
"    border-color: #1a73e8;\n"
"    background-color: #ffffff;\n"
"}\n"
"     "));
        lineEdit_confirm = new QLineEdit(centralwidget);
        lineEdit_confirm->setObjectName(QStringLiteral("lineEdit_confirm"));
        lineEdit_confirm->setGeometry(QRect(400, 370, 261, 40));
        lineEdit_confirm->setStyleSheet(QLatin1String("\n"
"QLineEdit {\n"
"    padding: 10px;\n"
"    border: 2px solid #ddd;\n"
"    border-radius: 10px;\n"
"    background-color: #ffffffcc;\n"
"    font-size: 16px;\n"
"}\n"
"QLineEdit:hover {\n"
"    border-color: #5cadff;\n"
"}\n"
"QLineEdit:focus {\n"
"    border-color: #1a73e8;\n"
"    background-color: #ffffff;\n"
"}\n"
"     "));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 0, 1061, 691));
        label_3->setPixmap(QPixmap(QString::fromUtf8("images/bg.jpg")));
        label_3->setScaledContents(true);
        SignupWindow->setCentralWidget(centralwidget);
        label_3->raise();
        label->raise();
        label_2->raise();
        lineEdit_username->raise();
        pushButton_signup->raise();
        label_loginText->raise();
        pushButton_login->raise();
        lineEdit_password->raise();
        lineEdit_confirm->raise();
        menubar = new QMenuBar(SignupWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1062, 21));
        SignupWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SignupWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SignupWindow->setStatusBar(statusbar);

        retranslateUi(SignupWindow);

        QMetaObject::connectSlotsByName(SignupWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SignupWindow)
    {
        SignupWindow->setWindowTitle(QApplication::translate("SignupWindow", "Signup", nullptr));
        label->setText(QApplication::translate("SignupWindow", "Welcome to Railway Management Era", nullptr));
        label_2->setText(QApplication::translate("SignupWindow", "SIGNUP", nullptr));
        lineEdit_username->setPlaceholderText(QApplication::translate("SignupWindow", "Username", nullptr));
        pushButton_signup->setText(QApplication::translate("SignupWindow", "Signup", nullptr));
        label_loginText->setText(QApplication::translate("SignupWindow", "Already have an account?", nullptr));
        pushButton_login->setText(QApplication::translate("SignupWindow", "Login", nullptr));
        lineEdit_password->setPlaceholderText(QApplication::translate("SignupWindow", "Email", nullptr));
        lineEdit_confirm->setPlaceholderText(QApplication::translate("SignupWindow", "Password", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SignupWindow: public Ui_SignupWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // SIGNUP_H
