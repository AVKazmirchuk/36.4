#ifndef INC_1_HEADER_H
#define INC_1_HEADER_H



#include <QWidget>

class Circle : public QWidget
{
public:
    Circle(QWidget* parent = nullptr);

protected:
    void paintEvent(QPaintEvent* e);

private:
    double radius = 50;

    void painting();
};



#endif //INC_1_HEADER_H
