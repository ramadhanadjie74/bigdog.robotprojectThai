#include "mainwindow.h"
#include "ui_mainwindow.h"

#define green 0
#define VALOR_INICIAL 0
#define RANGO_PWM 255


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    wiringPiSetup();
    softPwmCreate(green,VALOR_INICIAL,RANGO_PWM);
    pinMode(3,OUTPUT);
    pinMode(2,OUTPUT);
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_pushButton_clicked()
{
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
}

void MainWindow::on_pushButton_2_clicked()
{
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
}


void MainWindow::on_pushButton_3_clicked()
{
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
}

void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    softPwmWrite(green,value);
}
