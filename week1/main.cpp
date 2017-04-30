/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 1 Opdracht 19.1.2 & 19.1.3
/* --------------------------- */

#include <iostream>
#include "window.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include "rectangle_filled.hpp"
#include "circle.hpp"
#include "wagon.hpp"
#include "train.hpp"
#include "train_head.hpp"

/*! \brief main
 * Creates a window and draws a filled rectangle followed by a train with 3 wagons
 */
int main(int argc, char **argv){
   window w( 128, 64, 2 );

   rectangle_filled fill(w, 5, 5, 20, 20);
   fill.print();

    train train1(w, 30, 30, 1);
    train1.print();
    return 0;
}
