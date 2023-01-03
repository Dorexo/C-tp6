#ifndef TP6_PONEY_H
#define TP6_PONEY_H

#include<cstring>

#include "Point.h"

class Poney{
private:
    char* id;
    Point pos;
public:
    Poney();
    Poney(char* name, Point p);
    Poney(Poney& P);
    ~Poney();

    void setId(char* name){id=new char[20]; strcpy(id,name);};
    void setPoint(Point& p){pos = Point(p.getX(),p.getY());};
    char* getId(){return id;};
    Point getPoint(){return pos;};

    float moveTo(Point p);
};

#endif //TP6_PONEY_H
