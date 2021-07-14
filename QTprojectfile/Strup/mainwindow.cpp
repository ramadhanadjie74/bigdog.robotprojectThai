#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFile"
#include "QMessageBox"
#include "QTextStream"
#include "QPixmap"
#include "QTimer"
#include "QDateTime"
#include "QDebug"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTimer::singleShot(1,this,SLOT(showFullScreen()));
    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(Myfunction()));
    timer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Myfunction()
{
    QFile file("/var/robot/face.text");
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
       QMessageBox::warning(this, "tittle","File not Open");
    }
   QTextStream in(&file);
   QString text=in.readAll();
   if (text=="1")

   {
       QPixmap pix(":/new/prefix1/faces/7.png");
       ui->label->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
   }

   if (text=="2")

   {
       QPixmap pix(":/new/prefix1/faces/1.png");
       ui->label->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
   }

   if (text=="3")

   {
       QPixmap pix(":/new/prefix1/faces/4.png");
       ui->label->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
   }

   if (text=="4")

   {
       QPixmap pix(":/new/prefix1/faces/5.png");
       ui->label->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
   }

   if (text=="5")

   {
       QPixmap pix(":/new/prefix1/faces/2.png");
       ui->label->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
   }
}

