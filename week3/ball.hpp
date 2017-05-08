/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 2 Opdracht 19.2.2 & 19.2.3
/* --------------------------- */
/** @file **/

#ifndef BALL_HPP
#define BALL_HPP

#include "window.hpp"
#include "vector.hpp"
#include "circle.hpp"

/** \brief
 * ball class
 * \details
 * creates a ball that bounces off walls */
class ball : public circle {
private:
   vector speed;
public:
   ball( window & w, const vector & midpoint, int radius, const vector & speed );
   /** \brief
     * update
     * \details
     * updates location of ball based on speed */
   void update() override;
   /** \brief
     * ball interact function
     * \details
     * if there is interaction between the ball and an object; changes speed */
   void interact( drawable & other ) override;
};

#endif // BALL_HPP
