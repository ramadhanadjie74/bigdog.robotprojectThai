#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QPixmap>

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

    void on_WINK_clicked();

    void on_GLASSES_clicked();

    void on_SMILE_clicked();

    void on_LOVE_clicked();

    void on_CONFUSE_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
