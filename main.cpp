#include <QApplication>

#include "Header.h"



int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    Circle circle;

    circle.setWindowTitle("Circle");
    circle.show();



    return app.exec();
}

