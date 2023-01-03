#include<sstream>
#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cstring>
#include<ctime>
#include<fstream>
#include<cmath>

using namespace std;

#include "Point.h"


Point::Point(float x, float y) {
    setX(x);
    setY(y);
}
Point::Point(Point &P) {
    setX(P.getX());
    setY(P.getY());
}