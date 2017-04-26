#ifndef DAOZHA_H
#define DAOZHA_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>

namespace Ui {
class daozha;
}

class daozha : public QMainWindow
{
    Q_OBJECT

public:
    explicit daozha(QWidget *parent = 0);
    ~daozha();

private:
    void initScene();
    void initSceneBackground();

private:
    Ui::daozha *ui;
    QGraphicsScene * scene;
    QGraphicsView * view;
};

#endif // DAOZHA_H
