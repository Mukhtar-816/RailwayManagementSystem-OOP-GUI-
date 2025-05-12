/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef LOGIN_H
#define LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QLabel *label_3;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1062, 721);
        MainWindow->setMinimumSize(QSize(1062, 721));
        MainWindow->setMaximumSize(QSize(1062, 721));
        MainWindow->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(MainWindow);
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
        lineEdit_username->setGeometry(QRect(405, 270, 261, 40));
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
        lineEdit_password = new QLineEdit(centralwidget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(405, 320, 261, 40));
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
        lineEdit_password->setEchoMode(QLineEdit::Password);
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(410, 380, 250, 31));
        checkBox->setStyleSheet(QStringLiteral("color:#fff; font-size:14px; font-family:\"Segoe UI\";"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(465, 430, 130, 40));
        pushButton->setStyleSheet(QLatin1String("\n"
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
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(400, 500, 171, 21));
        label_3->setStyleSheet(QStringLiteral("color:#fff; font-size:15px;"));
        label_3->setAlignment(Qt::AlignCenter);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(570, 500, 90, 25));
        pushButton_2->setStyleSheet(QLatin1String("\n"
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
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 0, 1061, 691));
        label_4->setPixmap(QPixmap(QString::fromUtf8("images/bg.jpg")));
        label_4->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        label_4->raise();
        label->raise();
        label_2->raise();
        lineEdit_username->raise();
        lineEdit_password->raise();
        checkBox->raise();
        pushButton->raise();
        label_3->raise();
        pushButton_2->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1062, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "Welcome to Railway Management Era", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "LOGIN", nullptr));
        lineEdit_username->setPlaceholderText(QApplication::translate("MainWindow", "Username", nullptr));
        lineEdit_password->setPlaceholderText(QApplication::translate("MainWindow", "Password", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "Login as Admin", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Login", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Don't have an account?", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Create one", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // LOGIN_H
