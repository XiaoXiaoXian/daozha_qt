#include "daozha.h"
#include "ui_daozha.h"
#include <QPainter>
#include <QImage>
#include <QDebug>


daozha::daozha(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::daozha)
{
    jiaodu=0;
    ui->setupUi(this);
    tim=new QTimer(this);
    connect( tim, SIGNAL(timeout()),this, SLOT(jiaodu_change()));
    tim->start(50);

}

daozha::~daozha()
{
    delete ui;
}

void daozha::initSceneBackground()
{

}

void daozha::jiaodu_change()
{
    jiaodu+=1;
    if(jiaodu>90)
        jiaodu=0;
    update();
    qDebug()<<"jiaodu_change "<<jiaodu<<endl;
}

void daozha::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPainter painter_gan(this);
    QImage image;
    QImage image_gan;
    if(image.load(":/image/daozhagang.png"))
    {
         resize(image.width(),image.height());
         painter.drawImage(QPointF(0,0),image);
         painter.drawText(10,10,QString("width:")+QString::number( image.width())+" height:"+QString::number( image.height()));
    }
    else
        painter.drawText(QPointF(40.0,40.0),"open image error!!");

    if(image_gan.load(":/image/gan.png"))
    {
        painter_gan.setWindow( QRect( -601,-339,image.width(),image.height()));
        painter_gan.rotate(jiaodu+180);
        painter_gan.drawImage(QPointF(0,0),image_gan);

    }
    else
    {
         painter.drawText(QPointF(20,80),"open :/image/gan.png error!!");
    }


}



