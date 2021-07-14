#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFile"
#include "QMessageBox"
#include "QTextStream"


#define left 2
#define right 21
#define back 26
#define VALOR_INICIAL 21
#define RANGO_PWM 255

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    wiringPiSetup();
    softPwmCreate(left,VALOR_INICIAL,RANGO_PWM);
    softPwmCreate(right,VALOR_INICIAL,RANGO_PWM);
    softPwmCreate(back,VALOR_INICIAL,RANGO_PWM);
    pinMode(14,OUTPUT);
    pinMode(30,OUTPUT);
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_FORWARD_clicked()
{
    digitalWrite(14,HIGH);
    digitalWrite(30,LOW);
}

void MainWindow::on_pushButton_clicked()
{
    digitalWrite(14,LOW);
    digitalWrite(30,LOW);
}

void MainWindow::on_BACKWARD_clicked()
{
    digitalWrite(30,HIGH);
    digitalWrite(14,LOW);
}

void MainWindow::on_LEFT_clicked()
{


}

void MainWindow::on_RIGHT_clicked()
{

}

void MainWindow::on_verticalSlider_valueChanged(int value)
{
     softPwmWrite(left,value);
}

void MainWindow::on_verticalSlider_2_valueChanged(int value)
{
    softPwmWrite(back,value);
}

void MainWindow::on_verticalSlider_3_valueChanged(int value)
{
    softPwmWrite(right,value);
}

void MainWindow::on_one_clicked()
{
    QFile file("/var/robot/face.text");
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
       QMessageBox::warning(this, "tittle","File not Open");
    }
   QTextStream out(&file);
   QString text="1";
   out << text;
   file.flush();
   file.close();
}

void MainWindow::on_two_clicked()
{
    QFile file("/var/robot/face.text");
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
       QMessageBox::warning(this, "tittle","File not Open");
    }
   QTextStream out(&file);
   QString text="2";
   out << text;
   file.flush();
   file.close();
}

void MainWindow::on_tri_clicked()
{
    QFile file("/var/robot/face.text");
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
       QMessageBox::warning(this, "tittle","File not Open");
    }
   QTextStream out(&file);
   QString text="3";
   out << text;
   file.flush();
   file.close();
}

void MainWindow::on_four_clicked()
{
    QFile file("/var/robot/face.text");
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
       QMessageBox::warning(this, "tittle","File not Open");
    }
   QTextStream out(&file);
   QString text="4";
   out << text;
   file.flush();
   file.close();
}

void MainWindow::on_five_clicked()
{
    QFile file("/var/robot/face.text");
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
       QMessageBox::warning(this, "tittle","File not Open");
    }
   QTextStream out(&file);
   QString text="5";
   out << text;
   file.flush();
   file.close();
}
