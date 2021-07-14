#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <wiringPi.h>
#include <softPwm.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_verticalSlider_actionTriggered(int action);

    void on_verticalSlider_2_actionTriggered(int action);

    void on_verticalSlider_3_actionTriggered(int action);

    void on_FORWARD_clicked();

    void on_pushButton_clicked();

    void on_BACKWARD_clicked();

    void on_LEFT_clicked();

    void on_RIGHT_clicked();

    void on_verticalSlider_valueChanged(int value);

    void on_verticalSlider_2_valueChanged(int value);

    void on_verticalSlider_3_valueChanged(int value);

    void on_one_clicked();

    void on_two_clicked();

    void on_tri_clicked();

    void on_four_clicked();

    void on_pushButton_3_clicked();

    void on_five_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
