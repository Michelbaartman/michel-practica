/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 1 Opdracht 19.1.2 & 19.1.3
/* --------------------------- */

#ifndef TRAIN_HEAD_HPP
#define TRAIN_HEAD_HPP

#include "window.hpp"
#include "line.hpp"
#include "circle.hpp"
#include "rectangle.hpp"

class train_head
{
private:
    int x;
    int y;
    window & w;
public:
    train_head( window & w, int x, int y ):
        w(w),
        x(x),
        y(y)
    {}
    void print();
};

#endif // TRAIN_HEAD_HPP
