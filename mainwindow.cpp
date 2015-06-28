#include "mainwindow.h"
#include"Cube.h"
#include "ui_mainwindow.h"
#include <stdlib.h>
#include <ctime>
#include <string>
#include <QTimer>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    srand(time(NULL));
    ui->setupUi(this);
    start=false;
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::time_count(){
    int tmp=MainWindow::label_4->text().toInt();
    tmp++;
    MainWindow::label_4->setText(QString::number(tmp));
}

void MainWindow::on_pushButton_clicked()
{
    int side=70;
    int randobj;
    QFont f("FrankRuehl",30);
    if(start==false){
        MainWindow::label_4=new QLabel;
        MainWindow::start=true;MainWindow::movement=40;
        MainWindow::star=0;
        MainWindow::score=0;
        MainWindow::Gem=new Cubes[64];
        MainWindow::Box=new QLabel[64];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                MainWindow::Box[8*i+j].setParent(this);
                MainWindow::Box[8*i+j].setGeometry((60+side*j),130+side*i,side,side);
                randobj=rand()%5;MainWindow::Gem[8*i+j].color=randobj;
                MainWindow::Gem[8*i+j].type=0;MainWindow::Gem[8*i+j].selected=false;
                MainWindow::Gem[8*i+j].setPicture(MainWindow::Gem[8*i+j].color,MainWindow::Gem[8*i+j].type,MainWindow::Gem[8*i+j].selected);
                MainWindow::Box[8*i+j].setPixmap(MainWindow::Gem[8*i+j].pic);
                MainWindow::Box[8*i+j].show();
            }
        }
        MainWindow::label_4->setParent(this);
        MainWindow::label_4->setGeometry(260,10,81,50);
        MainWindow::label_4->setFont(f);
        MainWindow::label_4->setText("0");
        MainWindow::label_4->show();
        QTimer *timer=new QTimer(this);
        connect(timer,SIGNAL(timeout()),this,SLOT(time_count()));
        timer->start(1000);
    }
}
