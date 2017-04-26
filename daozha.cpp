#include "daozha.h"
#include "ui_daozha.h"

daozha::daozha(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::daozha)
{
    ui->setupUi(this);
    scene=new QGraphicsScene(this);
    this->ui->graphicsView->setScene(scene);
//    QGraphicsItem * item=new QGraphicsItem(this);
    //scene->setForegroundBrush(QPixmap("../ima/daozhai.jpg"));
//    scene->setBackgroundBrush(Qt::green);



}

daozha::~daozha()
{
    delete ui;
}

void daozha::initSceneBackground()
{

}


