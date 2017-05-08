/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 2 Opdracht 19.2.2 & 19.2.3
/* --------------------------- */


#include "vector.hpp"

std::ostream & operator<<( std::ostream & lhs, const vector & pos ){
   lhs << "(" << pos.x << "," << pos.y << ")";
   return lhs;
}