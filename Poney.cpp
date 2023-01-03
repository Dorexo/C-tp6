#include<sstream>
#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cstring>
#include<ctime>
#include<fstream>
#include<cmath>

using namespace std;

#include "Poney.h"


Poney::Poney() : id(new char[20]), pos(0,0) {
    strcpy(id,"");
}
Poney::Poney(char* name, Point p) : id(new char[20]), pos(p){
    strcpy(id,name);
}
Poney::Poney(Poney &P) : id(new char[20]), pos(P.getPoint().getX(),P.getPoint().getX()){
    strcpy(id,P.getId());
}
Poney::~Poney() {
    delete[] id;
}

float Poney::moveTo(Point p) {
    float x = abs(getPoint().getX()) - abs(p.getX());
    float y = abs(getPoint().getY()) - abs(p.getY());
    setPoint(p);
    return sqrt(x*x + y*y);
}