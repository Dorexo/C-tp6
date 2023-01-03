#ifndef TP6_POINT_H
#define TP6_POINT_H

class Point{
private:
    float x;
    float y;
public:
    Point(float x, float y);
    Point(Point& P);
    ~Point();

    void setX(float x){this->x=x;};
    void setY(float y){this->y=y;};
    float getX(){return x;};
    float getY(){return y;};
};



#endif //TP6_POINT_H
