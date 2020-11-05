#include "mainwindow.hh"
#include "ui_mainwindow.h"

const int PADDING = 10;

namespace StudentSide {

mainwindow::mainwindow(QWidget *parent) :
    QMainWindow(parent),
    ui_(new Ui::MainWindow)
{
    ui_->setupUi(this);
    ui_->gameView->setFixedSize(width_, height_);
    ui_->centralwidget->setFixedSize(width_ + ui_->startButton->width() + PADDING, height_ + PADDING);
    ui_->startButton->move(width_ + PADDING, PADDING);

    map = new QGraphicsScene(this);
    ui_->gameView->setScene(map);
    map->setSceneRect(0,0,width_,height_);
    resize(minimumSizeHint());


}

mainwindow::~mainwindow()
{
    delete ui_;
}

void mainwindow::setBackground(QImage &image)
{
    map->setBackgroundBrush(image);
}
}
