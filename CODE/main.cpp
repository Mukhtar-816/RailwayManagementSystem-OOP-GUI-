#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include "./headerFiles/login.h"
// #include "Ui_MainWindow"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QMainWindow window;
    Ui::MainWindow ui;
    ui.setupUi(&window);
    window.show();
    return app.exec();
}
