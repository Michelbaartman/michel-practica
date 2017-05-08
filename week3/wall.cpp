/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 2 Opdracht 19.2.2 & 19.2.3
/* --------------------------- */


#include "wall.hpp"

wall::wall( window & w, const vector & start, const vector & end, const vector & bounce):
    rectangle( w, start, end ),
    start ( start ),
    end ( end )
{
        drawable::bounce = bounce;
}

void wall::update(){
    for(    int x = 0 + start.x;    x < end.x; x++){
        for(int y = 0 + start.y;    y < end.y; y++){
            //cout<< "x" << x << "y" << y << "\n";
            //w.draw(x, y);
            w.draw(vector(x, y));
        }
    }
}


