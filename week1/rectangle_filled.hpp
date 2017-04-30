/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 1 Opdracht 19.1.2 & 19.1.3
/* --------------------------- */

#ifndef RECTANGLE_FILLED_HPP
#define RECTANGLE_FILLED_HPP

#include "window.hpp"

class rectangle_filled
{
private:
    int start_x;
    int start_y;
    int end_x;
    int end_y;
    window & w;
public:
    rectangle_filled( window & w, int start_x, int start_y, int end_x, int end_y ):
        w(w),
        start_x(start_x),
        start_y(start_y),
        end_x(end_x),
        end_y(end_y)
    {}
    void print();
};

#endif // RECTANGLE_FILLED_HPP
