#ifndef QUESTAO8_H
#define QUESTAO8_H
#include <iostream>

using namespace std;

class Point2d{
    private:
    float m_x;
    float m_y;

    float x1;
    float x2;

    float y1;
    float y2;

    public:
    Point2d();
    Point2d(float x, float y);

    void  setM_y ( int y);

    float  getM_x ();
    float  getM_y ();

    float distancia(Point2d f);
    void print();
};
#endif