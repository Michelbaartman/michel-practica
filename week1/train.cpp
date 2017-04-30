/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 1 Opdracht 19.1.2 & 19.1.3
/* --------------------------- */

#include "train.hpp"
/*! \brief train::print
 * Draws a train starting with the head followed by the carts based on the amount
 * given by the user.
 */
void train::print(){
    train_head head(w, x, y);
    head.print();
    x = x + 35;
    for(int i = 0; i < amount; i++){
        wagon cart(w, x, y);
        cart.print();
        x = x + 35;
    }
}

