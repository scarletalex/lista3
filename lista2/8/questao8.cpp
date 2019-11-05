#include <iostream>
#include "questao8.h"
#include <cmath>

using namespace std;

Point2d::Point2d(){
    m_y=0;
    m_x=0;
}
Point2d::Point2d(float x, float y){
    m_x=x;
    m_y=y;
}
float Point2d::getM_x (){
    return m_x;
}
float Point2d::getM_y (){
    return m_y;
}
float Point2d :: distancia (Point2d f) {
    
    float x1 = getM_x ();
    float y1 = getM_y ();

    float x2 = f. getM_x ();
    float y2 = f. getM_y ();

    return  sqrtf ((x1 - x2) * (x1 - x2) + ( y1 - y2) * ( y1 - y2));
}
void Point2d::print(){
    cout<<"Point2d("<<m_x<<", "<< m_y<<");"<<endl;
}