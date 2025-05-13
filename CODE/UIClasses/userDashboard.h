/********************************************************************************
** Form generated from reading UI file 'userDashboard.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef USERDASHBOARD_H
#define USERDASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserDashboard
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_home;
    QLabel *label_home;
    QLabel *label;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QWidget *tab_schedule;
    QLabel *label_4;
    QTableWidget *tableWidget;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_18;
    QWidget *tab_book;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QPlainTextEdit *plainTextEdit_2;
    QPlainTextEdit *plainTextEdit_3;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_8;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_28;
    QWidget *tab_cancel;
    QLabel *label_6;
    QTableWidget *tableWidget_2;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_home_3;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_4;
    QLabel *label_23;
    QLabel *label_25;
    QLabel *label_24;
    QLabel *label_27;
    QLabel *label_26;
    QWidget *tab_about;
    QLabel *label_about;
    QLabel *label_7;
    QLabel *label_home_2;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *UserDashboard)
    {
        if (UserDashboard->objectName().isEmpty())
            UserDashboard->setObjectName(QStringLiteral("UserDashboard"));
        UserDashboard->resize(1052, 725);
        UserDashboard->setMinimumSize(QSize(1052, 725));
        UserDashboard->setMaximumSize(QSize(1052, 725));
        centralwidget = new QWidget(UserDashboard);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(-10, 110, 1071, 631));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(10);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(1071, 631));
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QLatin1String("QTabWidget{\n"
"background-color:rgb(184, 184, 184)\n"
"}\n"
"QTabWidget::tab-bar {\n"
"    alignment: center;\n"
"}\n"
"QTabBar::tab {\n"
"    width: 160px;\n"
"    color: #fff;\n"
"background-color:rgba(0,0,0,0.8);\n"
"    padding: 12px 20px;\n"
"    font-size: 16px;\n"
"    border-top-left-radius: 10px;\n"
"    border-top-right-radius: 10px;\n"
"    margin: 0 5px;\n"
"}\n"
"QTabWidget::pane {\n"
"    border: 1px solid #444;\n"
"    background-color: rgba(0, 0, 0, 0.6);\n"
"    border-radius: 8px;\n"
"}\n"
"QTabBar::tab:hover {\n"
"    background-color: #333;\n"
"}\n"
"QTabBar::tab:selected {\n"
"    background-color: #1a73e8;\n"
"    font-weight: bold;\n"
"    color: #fff;\n"
"}\n"
"QLabel {\n"
"    color: #fff;\n"
"    font-weight: 600;\n"
"}\n"
"     "));
        tab_home = new QWidget();
        tab_home->setObjectName(QStringLiteral("tab_home"));
        label_home = new QLabel(tab_home);
        label_home->setObjectName(QStringLiteral("label_home"));
        label_home->setGeometry(QRect(30, 30, 511, 441));
        QFont font;
        font.setFamily(QStringLiteral("Calibri"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_home->setFont(font);
        label_home->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_home->setWordWrap(true);
        label = new QLabel(tab_home);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(560, 100, 471, 361));
        label->setStyleSheet(QStringLiteral("border-radius:5px;"));
        label->setPixmap(QPixmap(QString::fromUtf8("images/train.jpg")));
        label->setScaledContents(true);
        label_3 = new QLabel(tab_home);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, -150, 1051, 851));
        label_3->setPixmap(QPixmap(QString::fromUtf8("images/bg.jpg")));
        label_3->setScaledContents(true);
        pushButton_3 = new QPushButton(tab_home);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 470, 211, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Calibri"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QLatin1String("border-radius:10px;\n"
"background-color: red;\n"
"color : #fff;\n"
""));
        tabWidget->addTab(tab_home, QString());
        label_3->raise();
        label_home->raise();
        label->raise();
        pushButton_3->raise();
        tab_schedule = new QWidget();
        tab_schedule->setObjectName(QStringLiteral("tab_schedule"));
        label_4 = new QLabel(tab_schedule);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, -150, 1051, 851));
        label_4->setPixmap(QPixmap(QString::fromUtf8("images/bg.jpg")));
        label_4->setScaledContents(true);
        tableWidget = new QTableWidget(tab_schedule);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QFont font2;
        font2.setFamily(QStringLiteral("Calibri"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setFont(font2);
        __qtablewidgetitem->setBackground(QColor(0, 0, 0, 1));
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font2);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem2->setFont(font2);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem3->setFont(font2);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem4->setFont(font2);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 7)
            tableWidget->setRowCount(7);
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::NoBrush);
        QFont font3;
        font3.setBold(true);
        font3.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem5->setFont(font3);
        __qtablewidgetitem5->setForeground(brush);
        tableWidget->setItem(0, 0, __qtablewidgetitem5);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem6->setFont(font3);
        __qtablewidgetitem6->setForeground(brush1);
        tableWidget->setItem(0, 1, __qtablewidgetitem6);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem7->setFont(font3);
        __qtablewidgetitem7->setForeground(brush2);
        tableWidget->setItem(0, 2, __qtablewidgetitem7);
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem8->setFont(font3);
        __qtablewidgetitem8->setForeground(brush3);
        tableWidget->setItem(0, 3, __qtablewidgetitem8);
        QBrush brush4(QColor(255, 255, 255, 255));
        brush4.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem9->setFont(font3);
        __qtablewidgetitem9->setForeground(brush4);
        tableWidget->setItem(0, 4, __qtablewidgetitem9);
        QBrush brush5(QColor(255, 255, 255, 255));
        brush5.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem10->setForeground(brush5);
        tableWidget->setItem(1, 0, __qtablewidgetitem10);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem11->setForeground(brush6);
        tableWidget->setItem(1, 1, __qtablewidgetitem11);
        QBrush brush7(QColor(255, 255, 255, 255));
        brush7.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem12->setForeground(brush7);
        tableWidget->setItem(1, 2, __qtablewidgetitem12);
        QBrush brush8(QColor(255, 255, 255, 255));
        brush8.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem13->setForeground(brush8);
        tableWidget->setItem(1, 3, __qtablewidgetitem13);
        QBrush brush9(QColor(255, 255, 255, 255));
        brush9.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem14->setForeground(brush9);
        tableWidget->setItem(1, 4, __qtablewidgetitem14);
        QBrush brush10(QColor(255, 255, 255, 255));
        brush10.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem15->setForeground(brush10);
        tableWidget->setItem(2, 0, __qtablewidgetitem15);
        QBrush brush11(QColor(255, 255, 255, 255));
        brush11.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem16->setForeground(brush11);
        tableWidget->setItem(2, 1, __qtablewidgetitem16);
        QBrush brush12(QColor(255, 255, 255, 255));
        brush12.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem17->setForeground(brush12);
        tableWidget->setItem(2, 2, __qtablewidgetitem17);
        QBrush brush13(QColor(255, 255, 255, 255));
        brush13.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem18->setForeground(brush13);
        tableWidget->setItem(2, 3, __qtablewidgetitem18);
        QBrush brush14(QColor(255, 255, 255, 255));
        brush14.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem19->setForeground(brush14);
        tableWidget->setItem(2, 4, __qtablewidgetitem19);
        QBrush brush15(QColor(255, 255, 255, 255));
        brush15.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem20->setForeground(brush15);
        tableWidget->setItem(3, 0, __qtablewidgetitem20);
        QBrush brush16(QColor(255, 255, 255, 255));
        brush16.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem21->setForeground(brush16);
        tableWidget->setItem(3, 1, __qtablewidgetitem21);
        QBrush brush17(QColor(255, 255, 255, 255));
        brush17.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem22->setForeground(brush17);
        tableWidget->setItem(3, 2, __qtablewidgetitem22);
        QBrush brush18(QColor(255, 255, 255, 255));
        brush18.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem23->setForeground(brush18);
        tableWidget->setItem(3, 3, __qtablewidgetitem23);
        QBrush brush19(QColor(255, 255, 255, 255));
        brush19.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem24->setForeground(brush19);
        tableWidget->setItem(3, 4, __qtablewidgetitem24);
        QBrush brush20(QColor(255, 255, 255, 255));
        brush20.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem25->setForeground(brush20);
        tableWidget->setItem(4, 0, __qtablewidgetitem25);
        QBrush brush21(QColor(255, 255, 255, 255));
        brush21.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem26->setForeground(brush21);
        tableWidget->setItem(4, 1, __qtablewidgetitem26);
        QBrush brush22(QColor(255, 255, 255, 255));
        brush22.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem27->setForeground(brush22);
        tableWidget->setItem(4, 2, __qtablewidgetitem27);
        QBrush brush23(QColor(255, 255, 255, 255));
        brush23.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem28->setForeground(brush23);
        tableWidget->setItem(4, 3, __qtablewidgetitem28);
        QBrush brush24(QColor(255, 255, 255, 255));
        brush24.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem29->setForeground(brush24);
        tableWidget->setItem(4, 4, __qtablewidgetitem29);
        QBrush brush25(QColor(255, 255, 255, 255));
        brush25.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem30->setForeground(brush25);
        tableWidget->setItem(5, 0, __qtablewidgetitem30);
        QBrush brush26(QColor(255, 255, 255, 255));
        brush26.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem31->setForeground(brush26);
        tableWidget->setItem(5, 1, __qtablewidgetitem31);
        QBrush brush27(QColor(255, 255, 255, 255));
        brush27.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        __qtablewidgetitem32->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem32->setForeground(brush27);
        tableWidget->setItem(5, 2, __qtablewidgetitem32);
        QBrush brush28(QColor(255, 255, 255, 255));
        brush28.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem33->setForeground(brush28);
        tableWidget->setItem(5, 3, __qtablewidgetitem33);
        QBrush brush29(QColor(255, 255, 255, 255));
        brush29.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        __qtablewidgetitem34->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem34->setForeground(brush29);
        tableWidget->setItem(5, 4, __qtablewidgetitem34);
        QBrush brush30(QColor(255, 255, 255, 255));
        brush30.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        __qtablewidgetitem35->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem35->setForeground(brush30);
        tableWidget->setItem(6, 0, __qtablewidgetitem35);
        QBrush brush31(QColor(255, 255, 255, 255));
        brush31.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem36->setForeground(brush31);
        tableWidget->setItem(6, 1, __qtablewidgetitem36);
        QBrush brush32(QColor(255, 255, 255, 255));
        brush32.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        __qtablewidgetitem37->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem37->setForeground(brush32);
        tableWidget->setItem(6, 2, __qtablewidgetitem37);
        QBrush brush33(QColor(255, 255, 255, 255));
        brush33.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        __qtablewidgetitem38->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem38->setForeground(brush33);
        tableWidget->setItem(6, 3, __qtablewidgetitem38);
        QBrush brush34(QColor(255, 255, 255, 255));
        brush34.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        __qtablewidgetitem39->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem39->setForeground(brush34);
        tableWidget->setItem(6, 4, __qtablewidgetitem39);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(59, 170, 951, 301));
        tableWidget->setLayoutDirection(Qt::LeftToRight);
        tableWidget->setStyleSheet(QLatin1String("\n"
"font-size:20px;\n"
"background-color:#fff;\n"
"QTableWidget::row{\n"
"background-color:rgba(0,0,0,0.6);\n"
"}\n"
"\n"
""));
        tableWidget->setFrameShape(QFrame::NoFrame);
        tableWidget->setLineWidth(1);
        tableWidget->setAutoScroll(true);
        tableWidget->setTabKeyNavigation(false);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setShowGrid(true);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->setSortingEnabled(false);
        tableWidget->setWordWrap(true);
        tableWidget->setCornerButtonEnabled(false);
        tableWidget->setRowCount(7);
        tableWidget->setColumnCount(5);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(190);
        tableWidget->horizontalHeader()->setMinimumSectionSize(100);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(43);
        label_19 = new QLabel(tab_schedule);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(250, 120, 190, 50));
        label_19->setFont(font2);
        label_19->setStyleSheet(QLatin1String("color:\"#000000\";\n"
"background-color:\"#fff\";"));
        label_19->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(tab_schedule);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(440, 120, 190, 50));
        label_20->setFont(font2);
        label_20->setStyleSheet(QLatin1String("color:\"#000000\";\n"
"background-color:\"#fff\";"));
        label_20->setAlignment(Qt::AlignCenter);
        label_21 = new QLabel(tab_schedule);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(630, 120, 190, 50));
        label_21->setFont(font2);
        label_21->setStyleSheet(QLatin1String("color:\"#000000\";\n"
"background-color:\"#fff\";"));
        label_21->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(tab_schedule);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(820, 120, 190, 50));
        label_22->setFont(font2);
        label_22->setStyleSheet(QLatin1String("color:\"#000000\";\n"
"background-color:\"#fff\";"));
        label_22->setAlignment(Qt::AlignCenter);
        label_18 = new QLabel(tab_schedule);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(60, 120, 190, 50));
        label_18->setFont(font2);
        label_18->setStyleSheet(QLatin1String("color:\"#000000\";\n"
"background-color:\"#fff\";"));
        label_18->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_schedule, QString());
        tab_book = new QWidget();
        tab_book->setObjectName(QStringLiteral("tab_book"));
        label_5 = new QLabel(tab_book);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, -150, 1051, 851));
        label_5->setPixmap(QPixmap(QString::fromUtf8("images/bg.jpg")));
        label_5->setScaledContents(true);
        label_9 = new QLabel(tab_book);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(510, 560, 251, 41));
        label_9->setFont(font2);
        label_10 = new QLabel(tab_book);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(640, 560, 251, 41));
        label_10->setFont(font2);
        label_11 = new QLabel(tab_book);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(710, 560, 251, 41));
        label_11->setFont(font2);
        plainTextEdit_2 = new QPlainTextEdit(tab_book);
        plainTextEdit_2->setObjectName(QStringLiteral("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(670, 560, 221, 41));
        plainTextEdit_3 = new QPlainTextEdit(tab_book);
        plainTextEdit_3->setObjectName(QStringLiteral("plainTextEdit_3"));
        plainTextEdit_3->setGeometry(QRect(630, 560, 221, 41));
        label_12 = new QLabel(tab_book);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(760, 560, 251, 41));
        label_12->setFont(font2);
        label_13 = new QLabel(tab_book);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(90, 190, 171, 41));
        label_13->setFont(font2);
        label_14 = new QLabel(tab_book);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(130, 260, 121, 41));
        label_14->setFont(font2);
        label_8 = new QLabel(tab_book);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 120, 201, 41));
        label_8->setFont(font2);
        pushButton = new QPushButton(tab_book);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 420, 211, 51));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("border-radius:10px;\n"
"background-color: #1a73e8;\n"
"color : #fff;\n"
""));
        lineEdit = new QLineEdit(tab_book);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(270, 130, 211, 40));
        lineEdit_2 = new QLineEdit(tab_book);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(270, 200, 211, 40));
        lineEdit_3 = new QLineEdit(tab_book);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(270, 270, 211, 40));
        label_28 = new QLabel(tab_book);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(530, 60, 511, 441));
        label_28->setPixmap(QPixmap(QString::fromUtf8("../images/ticket2.png")));
        label_28->setScaledContents(true);
        tabWidget->addTab(tab_book, QString());
        tab_cancel = new QWidget();
        tab_cancel->setObjectName(QStringLiteral("tab_cancel"));
        label_6 = new QLabel(tab_cancel);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, -150, 1051, 851));
        label_6->setPixmap(QPixmap(QString::fromUtf8("images/bg.jpg")));
        label_6->setScaledContents(true);
        tableWidget_2 = new QTableWidget(tab_cancel);
        if (tableWidget_2->columnCount() < 5)
            tableWidget_2->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        __qtablewidgetitem40->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem40->setFont(font2);
        __qtablewidgetitem40->setBackground(QColor(0, 0, 0, 1));
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        __qtablewidgetitem41->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem41->setFont(font2);
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        __qtablewidgetitem42->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem42->setFont(font2);
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        __qtablewidgetitem43->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem43->setFont(font2);
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        __qtablewidgetitem44->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem44->setFont(font2);
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem44);
        if (tableWidget_2->rowCount() < 7)
            tableWidget_2->setRowCount(7);
        QBrush brush35(QColor(255, 255, 255, 255));
        brush35.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        __qtablewidgetitem45->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem45->setFont(font3);
        __qtablewidgetitem45->setForeground(brush35);
        tableWidget_2->setItem(0, 0, __qtablewidgetitem45);
        QBrush brush36(QColor(255, 255, 255, 255));
        brush36.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        __qtablewidgetitem46->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem46->setFont(font3);
        __qtablewidgetitem46->setForeground(brush36);
        tableWidget_2->setItem(0, 1, __qtablewidgetitem46);
        QBrush brush37(QColor(255, 255, 255, 255));
        brush37.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        __qtablewidgetitem47->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem47->setFont(font3);
        __qtablewidgetitem47->setForeground(brush37);
        tableWidget_2->setItem(0, 2, __qtablewidgetitem47);
        QBrush brush38(QColor(255, 255, 255, 255));
        brush38.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        __qtablewidgetitem48->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem48->setFont(font3);
        __qtablewidgetitem48->setForeground(brush38);
        tableWidget_2->setItem(0, 3, __qtablewidgetitem48);
        QBrush brush39(QColor(255, 255, 255, 255));
        brush39.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        __qtablewidgetitem49->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem49->setFont(font3);
        __qtablewidgetitem49->setForeground(brush39);
        tableWidget_2->setItem(0, 4, __qtablewidgetitem49);
        QBrush brush40(QColor(255, 255, 255, 255));
        brush40.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        __qtablewidgetitem50->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem50->setForeground(brush40);
        tableWidget_2->setItem(1, 0, __qtablewidgetitem50);
        QBrush brush41(QColor(255, 255, 255, 255));
        brush41.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        __qtablewidgetitem51->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem51->setForeground(brush41);
        tableWidget_2->setItem(1, 1, __qtablewidgetitem51);
        QBrush brush42(QColor(255, 255, 255, 255));
        brush42.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        __qtablewidgetitem52->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem52->setForeground(brush42);
        tableWidget_2->setItem(1, 2, __qtablewidgetitem52);
        QBrush brush43(QColor(255, 255, 255, 255));
        brush43.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        __qtablewidgetitem53->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem53->setForeground(brush43);
        tableWidget_2->setItem(1, 3, __qtablewidgetitem53);
        QBrush brush44(QColor(255, 255, 255, 255));
        brush44.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        __qtablewidgetitem54->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem54->setForeground(brush44);
        tableWidget_2->setItem(1, 4, __qtablewidgetitem54);
        QBrush brush45(QColor(255, 255, 255, 255));
        brush45.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        __qtablewidgetitem55->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem55->setForeground(brush45);
        tableWidget_2->setItem(2, 0, __qtablewidgetitem55);
        QBrush brush46(QColor(255, 255, 255, 255));
        brush46.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        __qtablewidgetitem56->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem56->setForeground(brush46);
        tableWidget_2->setItem(2, 1, __qtablewidgetitem56);
        QBrush brush47(QColor(255, 255, 255, 255));
        brush47.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        __qtablewidgetitem57->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem57->setForeground(brush47);
        tableWidget_2->setItem(2, 2, __qtablewidgetitem57);
        QBrush brush48(QColor(255, 255, 255, 255));
        brush48.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        __qtablewidgetitem58->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem58->setForeground(brush48);
        tableWidget_2->setItem(2, 3, __qtablewidgetitem58);
        QBrush brush49(QColor(255, 255, 255, 255));
        brush49.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        __qtablewidgetitem59->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem59->setForeground(brush49);
        tableWidget_2->setItem(2, 4, __qtablewidgetitem59);
        QBrush brush50(QColor(255, 255, 255, 255));
        brush50.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        __qtablewidgetitem60->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem60->setForeground(brush50);
        tableWidget_2->setItem(3, 0, __qtablewidgetitem60);
        QBrush brush51(QColor(255, 255, 255, 255));
        brush51.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        __qtablewidgetitem61->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem61->setForeground(brush51);
        tableWidget_2->setItem(3, 1, __qtablewidgetitem61);
        QBrush brush52(QColor(255, 255, 255, 255));
        brush52.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        __qtablewidgetitem62->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem62->setForeground(brush52);
        tableWidget_2->setItem(3, 2, __qtablewidgetitem62);
        QBrush brush53(QColor(255, 255, 255, 255));
        brush53.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        __qtablewidgetitem63->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem63->setForeground(brush53);
        tableWidget_2->setItem(3, 3, __qtablewidgetitem63);
        QBrush brush54(QColor(255, 255, 255, 255));
        brush54.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        __qtablewidgetitem64->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem64->setForeground(brush54);
        tableWidget_2->setItem(3, 4, __qtablewidgetitem64);
        QBrush brush55(QColor(255, 255, 255, 255));
        brush55.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        __qtablewidgetitem65->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem65->setForeground(brush55);
        tableWidget_2->setItem(4, 0, __qtablewidgetitem65);
        QBrush brush56(QColor(255, 255, 255, 255));
        brush56.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        __qtablewidgetitem66->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem66->setForeground(brush56);
        tableWidget_2->setItem(4, 1, __qtablewidgetitem66);
        QBrush brush57(QColor(255, 255, 255, 255));
        brush57.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        __qtablewidgetitem67->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem67->setForeground(brush57);
        tableWidget_2->setItem(4, 2, __qtablewidgetitem67);
        QBrush brush58(QColor(255, 255, 255, 255));
        brush58.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        __qtablewidgetitem68->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem68->setForeground(brush58);
        tableWidget_2->setItem(4, 3, __qtablewidgetitem68);
        QBrush brush59(QColor(255, 255, 255, 255));
        brush59.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        __qtablewidgetitem69->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem69->setForeground(brush59);
        tableWidget_2->setItem(4, 4, __qtablewidgetitem69);
        QBrush brush60(QColor(255, 255, 255, 255));
        brush60.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        __qtablewidgetitem70->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem70->setForeground(brush60);
        tableWidget_2->setItem(5, 0, __qtablewidgetitem70);
        QBrush brush61(QColor(255, 255, 255, 255));
        brush61.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        __qtablewidgetitem71->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem71->setForeground(brush61);
        tableWidget_2->setItem(5, 1, __qtablewidgetitem71);
        QBrush brush62(QColor(255, 255, 255, 255));
        brush62.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        __qtablewidgetitem72->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem72->setForeground(brush62);
        tableWidget_2->setItem(5, 2, __qtablewidgetitem72);
        QBrush brush63(QColor(255, 255, 255, 255));
        brush63.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        __qtablewidgetitem73->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem73->setForeground(brush63);
        tableWidget_2->setItem(5, 3, __qtablewidgetitem73);
        QBrush brush64(QColor(255, 255, 255, 255));
        brush64.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        __qtablewidgetitem74->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem74->setForeground(brush64);
        tableWidget_2->setItem(5, 4, __qtablewidgetitem74);
        QBrush brush65(QColor(255, 255, 255, 255));
        brush65.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        __qtablewidgetitem75->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem75->setForeground(brush65);
        tableWidget_2->setItem(6, 0, __qtablewidgetitem75);
        QBrush brush66(QColor(255, 255, 255, 255));
        brush66.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        __qtablewidgetitem76->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem76->setForeground(brush66);
        tableWidget_2->setItem(6, 1, __qtablewidgetitem76);
        QBrush brush67(QColor(255, 255, 255, 255));
        brush67.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        __qtablewidgetitem77->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem77->setForeground(brush67);
        tableWidget_2->setItem(6, 2, __qtablewidgetitem77);
        QBrush brush68(QColor(255, 255, 255, 255));
        brush68.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        __qtablewidgetitem78->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem78->setForeground(brush68);
        tableWidget_2->setItem(6, 3, __qtablewidgetitem78);
        QBrush brush69(QColor(255, 255, 255, 255));
        brush69.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        __qtablewidgetitem79->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem79->setForeground(brush69);
        tableWidget_2->setItem(6, 4, __qtablewidgetitem79);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(50, 130, 950, 301));
        tableWidget_2->setLayoutDirection(Qt::LeftToRight);
        tableWidget_2->setStyleSheet(QLatin1String("\n"
"font-size:20px;\n"
"background-color:#fff;\n"
"QTableWidget::row{\n"
"background-color:rgba(0,0,0,0.6);\n"
"};\n"
"\n"
"\n"
""));
        tableWidget_2->setFrameShape(QFrame::NoFrame);
        tableWidget_2->setLineWidth(1);
        tableWidget_2->setAutoScroll(true);
        tableWidget_2->setTabKeyNavigation(false);
        tableWidget_2->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget_2->setShowGrid(true);
        tableWidget_2->setGridStyle(Qt::SolidLine);
        tableWidget_2->setSortingEnabled(false);
        tableWidget_2->setWordWrap(true);
        tableWidget_2->setCornerButtonEnabled(false);
        tableWidget_2->setRowCount(7);
        tableWidget_2->setColumnCount(5);
        tableWidget_2->horizontalHeader()->setVisible(false);
        tableWidget_2->horizontalHeader()->setDefaultSectionSize(190);
        tableWidget_2->horizontalHeader()->setMinimumSectionSize(100);
        tableWidget_2->verticalHeader()->setVisible(false);
        tableWidget_2->verticalHeader()->setDefaultSectionSize(43);
        label_15 = new QLabel(tab_cancel);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(560, 560, 251, 41));
        label_15->setFont(font2);
        label_16 = new QLabel(tab_cancel);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(710, 560, 251, 41));
        label_16->setFont(font2);
        label_17 = new QLabel(tab_cancel);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(80, 460, 221, 41));
        label_17->setFont(font2);
        label_home_3 = new QLabel(tab_cancel);
        label_home_3->setObjectName(QStringLiteral("label_home_3"));
        label_home_3->setGeometry(QRect(20, 20, 1062, 50));
        QFont font4;
        font4.setFamily(QStringLiteral("Calibri"));
        font4.setPointSize(22);
        font4.setBold(true);
        font4.setWeight(75);
        label_home_3->setFont(font4);
        label_home_3->setStyleSheet(QLatin1String("color : \"#fff\";\n"
""));
        label_home_3->setAlignment(Qt::AlignCenter);
        pushButton_2 = new QPushButton(tab_cancel);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(690, 460, 200, 51));
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QLatin1String("border-radius:10px;\n"
"background-color: #1a73e8;\n"
"color : #fff;\n"
""));
        lineEdit_4 = new QLineEdit(tab_cancel);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(320, 470, 211, 31));
        label_23 = new QLabel(tab_cancel);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(50, 80, 190, 50));
        label_23->setFont(font2);
        label_23->setStyleSheet(QLatin1String("color:\"#000000\";\n"
"background-color:\"#fff\";"));
        label_23->setAlignment(Qt::AlignCenter);
        label_25 = new QLabel(tab_cancel);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(240, 80, 190, 50));
        label_25->setFont(font2);
        label_25->setStyleSheet(QLatin1String("color:\"#000000\";\n"
"background-color:\"#fff\";"));
        label_25->setAlignment(Qt::AlignCenter);
        label_24 = new QLabel(tab_cancel);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(430, 80, 190, 50));
        label_24->setFont(font2);
        label_24->setStyleSheet(QLatin1String("color:\"#000000\";\n"
"background-color:\"#fff\";"));
        label_24->setAlignment(Qt::AlignCenter);
        label_27 = new QLabel(tab_cancel);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(620, 80, 190, 50));
        label_27->setFont(font2);
        label_27->setStyleSheet(QLatin1String("color:\"#000000\";\n"
"background-color:\"#fff\";"));
        label_27->setAlignment(Qt::AlignCenter);
        label_26 = new QLabel(tab_cancel);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(810, 80, 190, 50));
        label_26->setFont(font2);
        label_26->setStyleSheet(QLatin1String("color:\"#000000\";\n"
"background-color:\"#fff\";"));
        label_26->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tab_cancel, QString());
        tab_about = new QWidget();
        tab_about->setObjectName(QStringLiteral("tab_about"));
        label_about = new QLabel(tab_about);
        label_about->setObjectName(QStringLiteral("label_about"));
        label_about->setGeometry(QRect(150, 40, 751, 471));
        QFont font5;
        font5.setFamily(QStringLiteral("Calibri"));
        font5.setPointSize(20);
        font5.setBold(true);
        font5.setWeight(75);
        label_about->setFont(font5);
        label_about->setAlignment(Qt::AlignCenter);
        label_about->setWordWrap(true);
        label_7 = new QLabel(tab_about);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, -150, 1051, 851));
        label_7->setPixmap(QPixmap(QString::fromUtf8("images/bg.jpg")));
        label_7->setScaledContents(true);
        tabWidget->addTab(tab_about, QString());
        label_7->raise();
        label_about->raise();
        label_home_2 = new QLabel(centralwidget);
        label_home_2->setObjectName(QStringLiteral("label_home_2"));
        label_home_2->setGeometry(QRect(0, 20, 1062, 50));
        label_home_2->setFont(font4);
        label_home_2->setStyleSheet(QLatin1String("color : \"#fff\";\n"
""));
        label_home_2->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-10, 0, 1061, 701));
        label_2->setPixmap(QPixmap(QString::fromUtf8("images/bg.jpg")));
        label_2->setScaledContents(true);
        UserDashboard->setCentralWidget(centralwidget);
        label_2->raise();
        tabWidget->raise();
        label_home_2->raise();
        menubar = new QMenuBar(UserDashboard);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1052, 21));
        UserDashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(UserDashboard);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        UserDashboard->setStatusBar(statusbar);

        retranslateUi(UserDashboard);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(UserDashboard);
    } // setupUi

    void retranslateUi(QMainWindow *UserDashboard)
    {
        UserDashboard->setWindowTitle(QApplication::translate("UserDashboard", "Signup", nullptr));
        label_home->setText(QApplication::translate("UserDashboard", "Welcome to Railway Management ERA\n"
"\n"
"Plan smarter and travel easier with real-time train schedules, quick ticket booking and cancellations, travel history access, and effortless route exploration. Fast, simple, and reliable\342\200\224your journey starts here.", nullptr));
        label->setText(QString());
        label_3->setText(QString());
        pushButton_3->setText(QApplication::translate("UserDashboard", "Logout", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_home), QApplication::translate("UserDashboard", "Home", nullptr));
        label_4->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("UserDashboard", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("UserDashboard", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("UserDashboard", "Departure", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("UserDashboard", "Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("UserDashboard", "Destination", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(0, 0);
        ___qtablewidgetitem5->setText(QApplication::translate("UserDashboard", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(0, 1);
        ___qtablewidgetitem6->setText(QApplication::translate("UserDashboard", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(0, 2);
        ___qtablewidgetitem7->setText(QApplication::translate("UserDashboard", "Departure", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(0, 3);
        ___qtablewidgetitem8->setText(QApplication::translate("UserDashboard", "Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(0, 4);
        ___qtablewidgetitem9->setText(QApplication::translate("UserDashboard", "Destination", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(1, 0);
        ___qtablewidgetitem10->setText(QApplication::translate("UserDashboard", "01", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(1, 1);
        ___qtablewidgetitem11->setText(QApplication::translate("UserDashboard", "Express", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(1, 2);
        ___qtablewidgetitem12->setText(QApplication::translate("UserDashboard", "Khi", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(1, 3);
        ___qtablewidgetitem13->setText(QApplication::translate("UserDashboard", "05:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(1, 4);
        ___qtablewidgetitem14->setText(QApplication::translate("UserDashboard", "Hyd", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(2, 0);
        ___qtablewidgetitem15->setText(QApplication::translate("UserDashboard", "02", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(2, 1);
        ___qtablewidgetitem16->setText(QApplication::translate("UserDashboard", "Express", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(2, 2);
        ___qtablewidgetitem17->setText(QApplication::translate("UserDashboard", "Khi", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(2, 3);
        ___qtablewidgetitem18->setText(QApplication::translate("UserDashboard", "05:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(2, 4);
        ___qtablewidgetitem19->setText(QApplication::translate("UserDashboard", "Hyd", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(3, 0);
        ___qtablewidgetitem20->setText(QApplication::translate("UserDashboard", "03", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(3, 1);
        ___qtablewidgetitem21->setText(QApplication::translate("UserDashboard", "Express", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(3, 2);
        ___qtablewidgetitem22->setText(QApplication::translate("UserDashboard", "Khi", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(3, 3);
        ___qtablewidgetitem23->setText(QApplication::translate("UserDashboard", "05:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(3, 4);
        ___qtablewidgetitem24->setText(QApplication::translate("UserDashboard", "Hyd", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(4, 0);
        ___qtablewidgetitem25->setText(QApplication::translate("UserDashboard", "04", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(4, 1);
        ___qtablewidgetitem26->setText(QApplication::translate("UserDashboard", "Express", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(4, 2);
        ___qtablewidgetitem27->setText(QApplication::translate("UserDashboard", "Khi", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(4, 3);
        ___qtablewidgetitem28->setText(QApplication::translate("UserDashboard", "05:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(4, 4);
        ___qtablewidgetitem29->setText(QApplication::translate("UserDashboard", "Hyd", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(5, 0);
        ___qtablewidgetitem30->setText(QApplication::translate("UserDashboard", "05", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(5, 1);
        ___qtablewidgetitem31->setText(QApplication::translate("UserDashboard", "Express", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(5, 2);
        ___qtablewidgetitem32->setText(QApplication::translate("UserDashboard", "Khi", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(5, 3);
        ___qtablewidgetitem33->setText(QApplication::translate("UserDashboard", "05:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(5, 4);
        ___qtablewidgetitem34->setText(QApplication::translate("UserDashboard", "Hyd", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->item(6, 0);
        ___qtablewidgetitem35->setText(QApplication::translate("UserDashboard", "06", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget->item(6, 1);
        ___qtablewidgetitem36->setText(QApplication::translate("UserDashboard", "Express", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget->item(6, 2);
        ___qtablewidgetitem37->setText(QApplication::translate("UserDashboard", "Khi", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget->item(6, 3);
        ___qtablewidgetitem38->setText(QApplication::translate("UserDashboard", "05:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget->item(6, 4);
        ___qtablewidgetitem39->setText(QApplication::translate("UserDashboard", "Hyd", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        label_19->setText(QApplication::translate("UserDashboard", "Name", nullptr));
        label_20->setText(QApplication::translate("UserDashboard", "Departure", nullptr));
        label_21->setText(QApplication::translate("UserDashboard", "Time", nullptr));
        label_22->setText(QApplication::translate("UserDashboard", "Destination", nullptr));
        label_18->setText(QApplication::translate("UserDashboard", "ID", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_schedule), QApplication::translate("UserDashboard", "Train Schedule", nullptr));
        label_5->setText(QString());
        label_9->setText(QApplication::translate("UserDashboard", "Enter Train ID to Book :", nullptr));
        label_10->setText(QApplication::translate("UserDashboard", "Enter Train ID to Book :", nullptr));
        label_11->setText(QApplication::translate("UserDashboard", "Enter Train ID to Book :", nullptr));
        label_12->setText(QApplication::translate("UserDashboard", "Enter Train ID to Book :", nullptr));
        label_13->setText(QApplication::translate("UserDashboard", "Enter Your Name :", nullptr));
        label_14->setText(QApplication::translate("UserDashboard", "Enter Seats :", nullptr));
        label_8->setText(QApplication::translate("UserDashboard", "Enter Train ID to Book :", nullptr));
        pushButton->setText(QApplication::translate("UserDashboard", "Book", nullptr));
        label_28->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_book), QApplication::translate("UserDashboard", "Book Ticket", nullptr));
        label_6->setText(QString());
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem40->setText(QApplication::translate("UserDashboard", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem41->setText(QApplication::translate("UserDashboard", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem42->setText(QApplication::translate("UserDashboard", "Departure", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem43->setText(QApplication::translate("UserDashboard", "Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem44->setText(QApplication::translate("UserDashboard", "Destination", nullptr));

        const bool __sortingEnabled1 = tableWidget_2->isSortingEnabled();
        tableWidget_2->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget_2->item(0, 0);
        ___qtablewidgetitem45->setText(QApplication::translate("UserDashboard", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget_2->item(0, 1);
        ___qtablewidgetitem46->setText(QApplication::translate("UserDashboard", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget_2->item(0, 2);
        ___qtablewidgetitem47->setText(QApplication::translate("UserDashboard", "Departure", nullptr));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget_2->item(0, 3);
        ___qtablewidgetitem48->setText(QApplication::translate("UserDashboard", "Time", nullptr));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget_2->item(0, 4);
        ___qtablewidgetitem49->setText(QApplication::translate("UserDashboard", "Destination", nullptr));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget_2->item(1, 0);
        ___qtablewidgetitem50->setText(QApplication::translate("UserDashboard", "01", nullptr));
        QTableWidgetItem *___qtablewidgetitem51 = tableWidget_2->item(1, 1);
        ___qtablewidgetitem51->setText(QApplication::translate("UserDashboard", "Express", nullptr));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidget_2->item(1, 2);
        ___qtablewidgetitem52->setText(QApplication::translate("UserDashboard", "Khi", nullptr));
        QTableWidgetItem *___qtablewidgetitem53 = tableWidget_2->item(1, 3);
        ___qtablewidgetitem53->setText(QApplication::translate("UserDashboard", "05:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem54 = tableWidget_2->item(1, 4);
        ___qtablewidgetitem54->setText(QApplication::translate("UserDashboard", "Hyd", nullptr));
        QTableWidgetItem *___qtablewidgetitem55 = tableWidget_2->item(2, 0);
        ___qtablewidgetitem55->setText(QApplication::translate("UserDashboard", "02", nullptr));
        QTableWidgetItem *___qtablewidgetitem56 = tableWidget_2->item(2, 1);
        ___qtablewidgetitem56->setText(QApplication::translate("UserDashboard", "Express", nullptr));
        QTableWidgetItem *___qtablewidgetitem57 = tableWidget_2->item(2, 2);
        ___qtablewidgetitem57->setText(QApplication::translate("UserDashboard", "Khi", nullptr));
        QTableWidgetItem *___qtablewidgetitem58 = tableWidget_2->item(2, 3);
        ___qtablewidgetitem58->setText(QApplication::translate("UserDashboard", "05:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem59 = tableWidget_2->item(2, 4);
        ___qtablewidgetitem59->setText(QApplication::translate("UserDashboard", "Hyd", nullptr));
        QTableWidgetItem *___qtablewidgetitem60 = tableWidget_2->item(3, 0);
        ___qtablewidgetitem60->setText(QApplication::translate("UserDashboard", "03", nullptr));
        QTableWidgetItem *___qtablewidgetitem61 = tableWidget_2->item(3, 1);
        ___qtablewidgetitem61->setText(QApplication::translate("UserDashboard", "Express", nullptr));
        QTableWidgetItem *___qtablewidgetitem62 = tableWidget_2->item(3, 2);
        ___qtablewidgetitem62->setText(QApplication::translate("UserDashboard", "Khi", nullptr));
        QTableWidgetItem *___qtablewidgetitem63 = tableWidget_2->item(3, 3);
        ___qtablewidgetitem63->setText(QApplication::translate("UserDashboard", "05:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem64 = tableWidget_2->item(3, 4);
        ___qtablewidgetitem64->setText(QApplication::translate("UserDashboard", "Hyd", nullptr));
        QTableWidgetItem *___qtablewidgetitem65 = tableWidget_2->item(4, 0);
        ___qtablewidgetitem65->setText(QApplication::translate("UserDashboard", "04", nullptr));
        QTableWidgetItem *___qtablewidgetitem66 = tableWidget_2->item(4, 1);
        ___qtablewidgetitem66->setText(QApplication::translate("UserDashboard", "Express", nullptr));
        QTableWidgetItem *___qtablewidgetitem67 = tableWidget_2->item(4, 2);
        ___qtablewidgetitem67->setText(QApplication::translate("UserDashboard", "Khi", nullptr));
        QTableWidgetItem *___qtablewidgetitem68 = tableWidget_2->item(4, 3);
        ___qtablewidgetitem68->setText(QApplication::translate("UserDashboard", "05:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem69 = tableWidget_2->item(4, 4);
        ___qtablewidgetitem69->setText(QApplication::translate("UserDashboard", "Hyd", nullptr));
        QTableWidgetItem *___qtablewidgetitem70 = tableWidget_2->item(5, 0);
        ___qtablewidgetitem70->setText(QApplication::translate("UserDashboard", "05", nullptr));
        QTableWidgetItem *___qtablewidgetitem71 = tableWidget_2->item(5, 1);
        ___qtablewidgetitem71->setText(QApplication::translate("UserDashboard", "Express", nullptr));
        QTableWidgetItem *___qtablewidgetitem72 = tableWidget_2->item(5, 2);
        ___qtablewidgetitem72->setText(QApplication::translate("UserDashboard", "Khi", nullptr));
        QTableWidgetItem *___qtablewidgetitem73 = tableWidget_2->item(5, 3);
        ___qtablewidgetitem73->setText(QApplication::translate("UserDashboard", "05:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem74 = tableWidget_2->item(5, 4);
        ___qtablewidgetitem74->setText(QApplication::translate("UserDashboard", "Hyd", nullptr));
        QTableWidgetItem *___qtablewidgetitem75 = tableWidget_2->item(6, 0);
        ___qtablewidgetitem75->setText(QApplication::translate("UserDashboard", "06", nullptr));
        QTableWidgetItem *___qtablewidgetitem76 = tableWidget_2->item(6, 1);
        ___qtablewidgetitem76->setText(QApplication::translate("UserDashboard", "Express", nullptr));
        QTableWidgetItem *___qtablewidgetitem77 = tableWidget_2->item(6, 2);
        ___qtablewidgetitem77->setText(QApplication::translate("UserDashboard", "Khi", nullptr));
        QTableWidgetItem *___qtablewidgetitem78 = tableWidget_2->item(6, 3);
        ___qtablewidgetitem78->setText(QApplication::translate("UserDashboard", "05:00", nullptr));
        QTableWidgetItem *___qtablewidgetitem79 = tableWidget_2->item(6, 4);
        ___qtablewidgetitem79->setText(QApplication::translate("UserDashboard", "Hyd", nullptr));
        tableWidget_2->setSortingEnabled(__sortingEnabled1);

        label_15->setText(QApplication::translate("UserDashboard", "Enter Train ID to Book :", nullptr));
        label_16->setText(QApplication::translate("UserDashboard", "Enter Train ID to Book :", nullptr));
        label_17->setText(QApplication::translate("UserDashboard", "Enter Train ID to Cancel :", nullptr));
        label_home_3->setText(QApplication::translate("UserDashboard", "Your Booked Tickets", nullptr));
        pushButton_2->setText(QApplication::translate("UserDashboard", "Cancel", nullptr));
        label_23->setText(QApplication::translate("UserDashboard", "Ticket ID", nullptr));
        label_25->setText(QApplication::translate("UserDashboard", "Name", nullptr));
        label_24->setText(QApplication::translate("UserDashboard", "Train No", nullptr));
        label_27->setText(QApplication::translate("UserDashboard", "Seat", nullptr));
        label_26->setText(QApplication::translate("UserDashboard", "Payment", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_cancel), QApplication::translate("UserDashboard", "Cancel Ticket", nullptr));
        label_about->setText(QApplication::translate("UserDashboard", "\n"
"ABOUT US\n"
"\n"
"\n"
"Our Railway Management System is a comprehensive platform designed to streamline and modernize train operations for both passengers and administrators. Built with efficiency and user experience in mind, the system allows users to securely sign up, log in, view available trains, book or cancel tickets, and track their booking history. Administrators are empowered with tools to manage train schedules, add or update train details, and monitor bookings in real-time. With an intuitive interface and robust backend, our system ensures reliable, transparent, and seamless railway services for all stakeholders.\n"
"\n"
"", nullptr));
        label_7->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_about), QApplication::translate("UserDashboard", "About", nullptr));
        label_home_2->setText(QApplication::translate("UserDashboard", "Railway Management ERA", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserDashboard: public Ui_UserDashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // USERDASHBOARD_H
