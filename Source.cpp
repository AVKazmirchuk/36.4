#include <QPainter>

#include "Header.h"

Circle::Circle(QWidget* parent) : QWidget{parent} {}

void Circle::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);

    painting();
}

void Circle::painting()
{
 QPainter painter(this);

 painter.setRenderHint(QPainter::Antialiasing);
 painter.setPen(QPen(QBrush(Qt::black), 1));
 painter.setBrush(QBrush(QColor(Qt::yellow)));




    setMinimumHeight(geometry().width());
    setMinimumWidth(radius * 2);
    painter.drawEllipse(width() / 2 - radius,height() / 2 - radius, radius * 2, radius * 2);

}



