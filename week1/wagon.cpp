/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 1 Opdracht 19.1.2 & 19.1.3
/* --------------------------- */

#include "wagon.hpp"
#include <iostream>
using namespace std;

/*! \brief wagon::print
 * Draws a wagon of a train.
 */
void wagon::print(){
    rectangle body( w, x, y, x + bodyWidth, y + bodyLength );
    
    circle wheel1( w, x + wheels[0][0], y + wheels[0][1], 5 );
    circle wheel2( w, x + wheels[1][0], y + wheels[1][1], 5 );
    line line1( w, x + bodyWidth, y + bodyLength/2, x + bodyWidth + connectorLength, y + bodyLength/2 );
    
    body.print();
    wheel1.print();    
    wheel2.print();
    line1.print();
}

