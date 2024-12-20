#include "gamewidget.h"
#include <QTimer>

gamewidget::gamewidget(QWidget *parent)
    : QWidget{parent},
    timer(new QTimer(this)),
    universeSize(50)
{

}

gamewidget::~gamewidget()
{
    timer->setInterval(300);
    //delete[] **
}
