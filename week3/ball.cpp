/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 2 Opdracht 19.2.2 & 19.2.3
/* --------------------------- */
/** @file **/

#include "ball.hpp"
#include <iostream>

void ball::update(){
   location += speed;
}

ball::ball( window & w, const vector & midpoint, int radius, const vector & speed ):
   circle( w, midpoint, radius ),
   speed( speed )
{}

void ball::interact( drawable & other ){
   if( this != & other){
      if( overlaps( other )){
         speed.x *= other.giveBounceX(); // waarom werkt dit met een call functie wel, maar niet met other.bounce.x & other.bounce.y. Dit werkt echter wel in de drawable interact functie
         speed.y *= other.giveBounceY();
      }
   }
}