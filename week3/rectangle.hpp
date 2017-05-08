// example:
// declaration of a rectangle object that is contains four line objects

/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 2 Opdracht 19.2.2 & 19.2.3
/* --------------------------- */


#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "window.hpp"
#include "drawable.hpp"
#include "vector.hpp"
#include "line.hpp"

class rectangle : public drawable {
private:
   vector end;
   line left;
   line right;
   line top;
   line bottom;
public:
   rectangle( window & w, const vector & start, const vector & end );   
   void draw() override;
};


#endif // RECTANGLE_HPP
