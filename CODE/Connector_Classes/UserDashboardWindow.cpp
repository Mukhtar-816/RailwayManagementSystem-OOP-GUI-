#include "UserDashboardWindow.h"
#include "LoginWindow.h"
#include "windows.h"
#include <QtWidgets/QMessageBox>
#include <QtWidgets/QTableWidgetItem>

UserDashboardWindow::UserDashboardWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    connect(ui.pushButton, &QPushButton::clicked, this, &UserDashboardWindow::onBookTrainClicked);
    connect(ui.pushButton_2, &QPushButton::clicked, this, &UserDashboardWindow::onCancelBookingClicked);
    connect(ui.pushButton_3, &QPushButton::clicked, this, &UserDashboardWindow::onLogoutClicked);

    populateTrainTable();
    populateBookedTicketsTable();
}

UserDashboardWindow::~UserDashboardWindow() {}

void UserDashboardWindow::setUsername(const QString &username)
{
    m_username = username;
    ui.label_home_2->setText("Welcome, " + username);
}

QString UserDashboardWindow::getUsername() const
{
    return m_username;
}

void UserDashboardWindow::onBookTrainClicked()
{
    QString trainNo = ui.lineEdit->text();
    QString name = ui.lineEdit_2->text();
    QString seats = ui.lineEdit_3->text();

    if (name.isEmpty() || trainNo.isEmpty() || seats.isEmpty())
    {
        QMessageBox::warning(this, "Incomplete Data", "Please fill all booking fields.");
        return;
    }

    std::string res = ticketManager.bookTicket(trainNo.toInt(), name.toStdString(), seats.toInt());
    QMessageBox::information(this, "Booking", QString::fromStdString(res));

    populateBookedTicketsTable();
}

void UserDashboardWindow::onCancelBookingClicked()
{
    QString ticketId = ui.lineEdit_4->text();

    if (ticketId.isEmpty())
    {
        QMessageBox::warning(this, "Missing Info", "Enter Ticket ID to cancel.");
        return;
    }

    std::string result = ticketManager.cancelTicket(ticketId.toInt());
    QMessageBox::information(this, "Cancellation", QString::fromStdString(result));

    populateBookedTicketsTable();
}

void UserDashboardWindow::populateTrainTable()
{
    std::vector<Train> trains = ticketManager.viewTrains();

    ui.tableWidget->setRowCount(trains.size());
    ui.tableWidget->setColumnCount(5);
    QStringList headers = {"Train ID", "Name", "From", "To", "Time"};
    ui.tableWidget->setHorizontalHeaderLabels(headers);

    for (int row = 0; row < trains.size(); ++row)
    {
        const Train &t = trains[row];
        ui.tableWidget->setItem(row, 0, new QTableWidgetItem(QString::number(t.trainNo)));
        ui.tableWidget->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(t.name)));
        ui.tableWidget->setItem(row, 2, new QTableWidgetItem(QString::fromStdString(t.from)));
        ui.tableWidget->setItem(row, 3, new QTableWidgetItem(QString::fromStdString(t.to)));
        ui.tableWidget->setItem(row, 4, new QTableWidgetItem(QString::fromStdString(t.time)));
    }
}

void UserDashboardWindow::populateBookedTicketsTable()
{
    std::vector<Ticket> tickets = ticketManager.getUserBookedTickets();

    ui.tableWidget_2->setRowCount(tickets.size());
    ui.tableWidget_2->setColumnCount(5);

    QStringList headers = {"Ticket ID", "Name", "Train No", "Seats", "Total Cost"};
    ui.tableWidget_2->setHorizontalHeaderLabels(headers);

    for (int row = 0; row < tickets.size(); ++row)
    {
        const Ticket &t = tickets[row];
        ui.tableWidget_2->setItem(row, 0, new QTableWidgetItem(QString::number(t.ticketID)));
        ui.tableWidget_2->setItem(row, 1, new QTableWidgetItem(QString::fromStdString(t.name)));
        ui.tableWidget_2->setItem(row, 2, new QTableWidgetItem(QString::number(t.trainNo)));
        ui.tableWidget_2->setItem(row, 3, new QTableWidgetItem(QString::number(t.seats)));
        ui.tableWidget_2->setItem(row, 4, new QTableWidgetItem(QString::number(t.totalCost)));
    }

    // ui.tableWidget_2->resizeColumnsToContents();
    // ui.tableWidget_2->resizeRowsToContents();
}

void UserDashboardWindow::onLogoutClicked()
{
    bool res = sessionManager.logout();
    if (res)
    {
        QMessageBox::information(this, "Session", "Logged Out Successfully.");
        Sleep(800);
        LoginWindow *loginWindow = new LoginWindow();
        loginWindow->show();
        this->close();
    }
}