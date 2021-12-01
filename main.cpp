#include <QApplication>
#include <QWidget>
#include <QSlider>
#include <QVBoxLayout>
#include <QLabel>
#include <QDir>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget wdg;

    const QPixmap pxmg("../Image/green.png");
    const QPixmap pxmy("../Image/yellow.png");
    const QPixmap pxmr("../Image/red.png");

    QSlider* sld{new QSlider(Qt::Horizontal)};
    sld->setRange(0, 99);
    sld->setTickInterval(33);
    sld->setTickPosition(QSlider::TicksAbove);

    sld->setValue(50);

    QLabel* lbl{new QLabel()};
    lbl->setPixmap(pxmy);

    QObject::connect(sld, &QSlider::valueChanged, [&] (int value)
    {
        if (value < 33) lbl->setPixmap(pxmg);
        else if (value >= 33 && value <=66) lbl->setPixmap(pxmy);
        else lbl->setPixmap(pxmr);
    });

    QVBoxLayout* vbl{new QVBoxLayout};
    vbl->addWidget(lbl);
    vbl->addWidget(sld);

    wdg.setLayout(vbl);

    wdg.setWindowTitle("Traffic lights");
    wdg.show();

    return app.exec();
}

