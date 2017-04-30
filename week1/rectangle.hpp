/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 1 Opdracht 19.1.2 & 19.1.3
/* --------------------------- */
// Not my code, given by tutor

// example:
// declaration of a rectangle object that is contains four line objects

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "window.hpp"
#include "line.hpp"

class rectangle {
private:
   line left, right, top, bottom;
public:
   rectangle( window & w, int start_x, int start_y, int end_x, int end_y );
   void print();
};


#endif // RECTANGLE_HPP
