#ifndef FLUXION_H
#define FLUXION_H

#include <QMainWindow>
#include <QDropEvent>
#include <QUrl>
#include <QDebug>

namespace Ui {
class Fluxion;
}

class Fluxion : public QMainWindow
{
    Q_OBJECT

public:
    explicit Fluxion(QWidget *parent = 0);
    ~Fluxion();

private slots:
void on_pushButton_clicked();
void on_pushButton_2_clicked();

private:
    Ui::Fluxion *ui;

protected:
void dropEvent(QDropEvent *ev);
void dragEnterEvent(QDragEnterEvent *ev);
};

#endif // FLUXION_H
