/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 1 Opdracht 19.1.2 & 19.1.3
/* --------------------------- */

#include "train_head.hpp"

/*! \brief train_head::print
 * Draws the head of the train
 */
void train_head::print(){
    int bodyWidth = 30;
    int bodyLength = 10;
    int wheels [2][2] = { { 6, bodyLength }, { bodyWidth - 6, bodyLength } };
    int connectorLength = 5;
    
    rectangle body( w, x, y, x + bodyWidth, y + bodyLength );
    rectangle head( w, x + bodyWidth - 10, y - bodyLength, x + bodyWidth, y );
    rectangle inbetween( w, x + 5, y - 2, x + bodyWidth - 10, y );
    rectangle front( w, x + 2, y - 8, x + bodyWidth - 10, y - 2);
    rectangle smoker( w, x + 5, y - 10, x + 8, y - 8);
    
    circle wheel1( w, x + wheels[0][0], y + wheels[0][1], 5 );
    circle wheel2( w, x + wheels[1][0], y + wheels[1][1], 5 );
    line line1( w, x + bodyWidth, y + bodyLength/2, x + bodyWidth + connectorLength, y + bodyLength/2 );
    
    body.print();
    wheel1.print();    
    wheel2.print();
    line1.print();
    head.print();
    inbetween.print();
    front.print();
    smoker.print();
}

