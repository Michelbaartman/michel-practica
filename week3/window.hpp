// example:
// declaration of a window class

/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 2 Opdracht 19.2.2 & 19.2.3
/* --------------------------- */
/** @file **/

#ifndef WINDOW_HPP
#define WINDOW_HPP

#include "windows.h"
#include "vector.hpp"
/** \brief
 * window class
 * \details
 * creates a window
 */
class window {
   vector size;
   int scale;
   
   // needed to use the OS window
   HDC hdc;
   
public:
   window( const vector & size, int scale );
   void draw( const vector & pixel );
   void clear();
};

void wait_ms( int n );

#endif // WINDOW_HPP
