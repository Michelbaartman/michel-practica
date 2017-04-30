/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 1 Opdracht 19.1.2 & 19.1.3
/* --------------------------- */
// not my code, given by tutor

// example:
// declaration of a window class

#ifndef WINDOW_HPP
#define WINDOW_HPP

#include "windows.h"

class window {
   int x_size;
   int y_size;
   int scale;
   
   // needed to use the OS window
   HDC hdc;
   
public:
   window( int x_size, int y_size, int scale );
   void draw( int x, int y );
   void draw_color(int x, int y, int R, int G, int B);
   void clear();
};

#endif // WINDOW_HPP
