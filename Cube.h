#ifndef CUBE_H
#define CUBE_H
#include<QGraphicsPixmapItem>
#include<QObject>

class Cubes{
public:
    Cubes();
    Cubes(int i,int j);
    int type;
    int color;
    bool selected;
    QPixmap pic;
    void setPicture(int i,int j,bool k);
};
#endif // CUBE_H
