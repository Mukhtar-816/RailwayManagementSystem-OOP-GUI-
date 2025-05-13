#ifndef USERDASHBOARDWINDOW_H
#define USERDASHBOARDWINDOW_H

#include <QtWidgets/QMainWindow>
#include "../UIClasses/userDashboard.h"
#include "../Logic_classes/TicketManager.h"
#include "../Logic_classes/Train.h" 
#include "../Logic_classes/SystemManager.h" // Shared Train struct

class UserDashboardWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit UserDashboardWindow(QWidget *parent = nullptr);
    ~UserDashboardWindow();

    void setUsername(const QString &username);
    QString getUsername() const;

private slots:
    void onBookTrainClicked();
    void onCancelBookingClicked();
    void populateTrainTable();
    void populateBookedTicketsTable();
    void onLogoutClicked();

private:
    Ui::UserDashboard ui;
    QString m_username;
    TicketManager ticketManager;
    SessionManager sessionManager;
};

#endif // USERDASHBOARDWINDOW_H
