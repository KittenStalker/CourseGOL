#ifndef GAMEWIDGET_H
#define GAMEWIDGET_H

#include <QWidget>

class gamewidget : public QWidget
{
    Q_OBJECT
public:
    explicit gamewidget(QWidget *parent = nullptr);
    ~gamewidget();
protected:

private:
    QTimer* timer;

signals:
};

#endif // GAMEWIDGET_H
