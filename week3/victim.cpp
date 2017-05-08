/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 2 Opdracht 19.2.2 & 19.2.3
/* --------------------------- */


#include "victim.hpp" 

victim::victim( window & w, const vector & start, const vector & end ):
    rectangle( w, start, end )
{}

void victim::update(){
    top.changeLine(top.getStart(), top.getEnd()); // hier kom ik deze zondag niet meer uit, dus ik ga deze week er ff naar kijken hoe dit nou perfect in elkaar zit want ik wordt
                                                    // knettergek van de "deze variable is private"
}


