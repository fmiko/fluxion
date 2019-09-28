#include "fluxion.h"
#include "ui_fluxion.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QTextBrowser>
using namespace std;


Fluxion::Fluxion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Fluxion)
{
    ui->setupUi(this);
    setAcceptDrops(true);
}

Fluxion::~Fluxion()
{
    delete ui;
}

void Fluxion::dropEvent(QDropEvent *ev)
{
   QList<QUrl> urls = ev->mimeData()->urls();
   foreach(QUrl url, urls)
   {
       qDebug()<<url.toString();
   }
}

void Fluxion::dragEnterEvent(QDragEnterEvent *ev)
{
   ev->accept();
}


void Fluxion::on_pushButton_clicked()
{
     system("$pwd/fluxion-mod >> /tmp/TMPflux/debug");
}

void Fluxion::on_pushButton_2_clicked()
{
       for (int i = 0; i < 20; i++ ){
            QFile file("/tmp/TMPflux/log.txt");
            if(!file.open(QIODevice::ReadOnly))
            {
                QMessageBox::information(0,"Error",file.errorString());
                break;
            }
            QTextStream in(&file);

            ui->textBrowser->setText(in.readAll());

         }\
}
