/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 2 Opdracht 19.2.2 & 19.2.3
/* --------------------------- */
/** @file **/

#include "window.hpp"
#include "line.hpp"
#include "ball.hpp"
#include "wall.hpp"
#include "victim.hpp"

/** \brief
     * main 
     * \details
     * creates walls and balls that bounce against a target, making it smaller */
int main(){
   window w( vector( 128, 64 ), 2 );
   wall top(    w, vector(0, 0),    vector(127, 4),     vector(1, -1));
   wall right(  w, vector(123, 0),  vector(127, 63),    vector(-1, 1));
   wall bottom( w, vector(0, 59),   vector(127, 63),    vector(1, -1));
   wall left(   w, vector(0, 0),    vector(4, 63),      vector(-1, 1));
   ball b( w, vector( 50, 20 ), 4, vector( 10, 6 ) );
   ball b2( w, vector( 84, 10), 4, vector(10, 6));
   ball b3( w, vector( 15, 52), 4, vector(10, 6));
   victim vic( w, vector(20, 20), vector(40, 40));
   
   drawable * objects[] = { &b, &b2, &b3, &top, &left, &right, &bottom, &vic};

   for(;;){
      w.clear();
      for( auto & p : objects ){
         p->draw();
      }
      
      wait_ms( 1 );
      for( auto & p : objects ){
          p->update();
      }
      for( auto & p : objects ){
         for( auto & other : objects ){
            p->interact( *other );
         } 
      }
   }
}

