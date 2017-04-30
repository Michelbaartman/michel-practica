/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 1 Opdracht 19.1.2 & 19.1.3
/* --------------------------- */

#include "rectangle_filled.hpp"
#include <iostream>
using namespace std;

/*! \brief rectangle_filled::print
 * draws a filled rectangle at the given x and y cords
 */
void rectangle_filled::print(){
    const int width = 1;
    
    int x0 = start_x;
    int y0 = start_y;
    int x1 = end_x;
    int y1 = end_y;
    // swap if start < end
    int xDraw = x1 - x0;
    int yDraw = y1 - y0;
    for(int x = 0+x0; x < x1; x++){
        for(int y = 0+y0; y < y1; y++){
            //cout<< "x" << x << "y" << y << "\n";
            //w.draw(x, y);
            w.draw_color(x, y, 0xFF, 0x00, 0x00);
        }
    }
}