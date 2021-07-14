#include "mainwindow.h"
#include "ui_mainwindow.h"

#define green 0
#define red 2
#define blue 3
#define VALOR_INICIAL 0
#define RANGO_PWM 100

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    wiringPiSetup();
    softPwmCreate(green,VALOR_INICIAL,RANGO_PWM);
    softPwmCreate(red,VALOR_INICIAL,RANGO_PWM);
    softPwmCreate(blue,VALOR_INICIAL,RANGO_PWM);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Green_VerticalSlider_valueChanged(int value)
{
    softPwmWrite(green,value);
}

void MainWindow::on_Red_VerticalSlider_valueChanged(int value)
{
    softPwmWrite(red,value);
}

void MainWindow::on_Blue_VerticalSlider_valueChanged(int value)
{
    softPwmWrite(blue,value);
}
