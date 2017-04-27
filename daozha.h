#ifndef DAOZHA_H
#define DAOZHA_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QTimer>

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

protected slots:
    void jiaodu_change(void);

protected:
    void paintEvent(QPaintEvent *event);


private:
    Ui::daozha *ui;
    QTimer *tim;
    qreal jiaodu;

};

#endif // DAOZHA_H
