#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFile"
#include "QMessageBox"
#include "QTextStream"
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

void MainWindow::on_write_clicked()
{
    QFile file("face.txt");
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
       QMessageBox::warning(this, "tittle","File not Open");
    }
   QTextStream out(&file);
   QString text=ui->plainTextEdit->toPlainText();
   out << text;
   file.flush();
   file.close();
}

void MainWindow::on_read_clicked()
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
       QPixmap pix("/home/user/QTprojectfile/Faces/emot/39878.png");
       ui->label->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
   }

   if (text=="2")

   {
       QPixmap pix("/home/user/QTprojectfile/Faces/emot/40186.png");
       ui->label->setPixmap(pix.scaled(100,100, Qt::KeepAspectRatio, Qt::SmoothTransformation));
   }

   ui->plainTextEdit->setPlainText(text);
   file.close();
}
