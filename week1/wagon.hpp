/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 1 Opdracht 19.1.2 & 19.1.3
/* --------------------------- */

#ifndef WAGON_HPP
#define WAGON_HPP

#include "window.hpp"
#include "line.hpp"
#include "circle.hpp"
#include "rectangle.hpp"

// bevat 1 rechthoek, 1 lijn, 1 cirkel en 1 van deze dingen vaker
class wagon
{
private:
    int x;
    int y;
    window & w;
    int bodyWidth = 30;
    int bodyLength = 10;
    int wheels [2][2] = { { 6, bodyLength }, { bodyWidth - 6, bodyLength } };
    int connectorLength = 5;
    
public:
    wagon(window & w, int x, int y):
        w(w),
        x(x),
        y(y)
    {}
    void print();
};

#endif // WAGON_HPP
