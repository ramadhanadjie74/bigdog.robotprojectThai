#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPixmap"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_WINK_clicked()
{
  QPixmap pix("/home/user/QTprojectfile/Faces/emot/39878.png");
  ui->label->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

void MainWindow::on_GLASSES_clicked()
{
    QPixmap pix("/home/user/QTprojectfile/Faces/emot/40186.png");
    ui->label->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

void MainWindow::on_SMILE_clicked()
{
    QPixmap pix("/home/user/QTprojectfile/Faces/emot/40263.png");
    ui->label->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

void MainWindow::on_LOVE_clicked()
{
    QPixmap pix("/home/user/QTprojectfile/Faces/emot/face.png");
    ui->label->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
}

void MainWindow::on_CONFUSE_clicked()
{
    QPixmap pix("/home/user/QTprojectfile/Faces/emot/40307.png");
    ui->label->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
}
