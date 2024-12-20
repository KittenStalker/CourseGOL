#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->startButton, SIGNAL(clicked()),this,SLOT(start()));
    connect(ui->stopButton, SIGNAL(clicked()),this,SLOT(stop()));
    connect(ui->clearButton, SIGNAL(clicked()),this,SLOT(clear()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

