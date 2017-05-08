/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 2 Opdracht 19.2.2 & 19.2.3
/* --------------------------- */
/** @file **/

#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "window.hpp"
#include "vector.hpp"
#include "drawable.hpp"

class circle : public drawable {
protected:
   int radius;
public:
   circle( window & w, const vector & midpoint, int radius ):
      drawable( w, midpoint - vector( radius, radius ), vector( radius, radius ) * 2 ),
      radius( radius )
   {}
   void draw() override;
};

#endif // CIRCLE_HPP
