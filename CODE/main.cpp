#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("Responsive Example");

    QLabel *label = new QLabel("Welcome to Railway Management System");
    label->setWordWrap(true); // Let the text wrap automatically

    QPushButton *button = new QPushButton("Click Me");

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(label);
    layout->addWidget(button);

    window.setLayout(layout);
    window.resize(400, 200); // initial size
    window.show();

    return app.exec();
}
