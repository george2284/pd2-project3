#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Cube.h"
#include "ui_mainwindow.h"
#include <QMainWindow>

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
    void time_count();
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Cubes* Gem;
    QLabel* Box;
    QLabel* label_4;
    bool start;
    int movement;
    int star;
    int score;
};

#endif // MAINWINDOW_H
