#ifndef QUESTAO7_H
#define QUESTAO7_H
#include <iostream>

using namespace std;

class Point2d{
    private:
    float m_x;
    float m_y;

    public:
    Point2d();
    Point2d(float x, float y);
    void print();
};
#endif