/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 2 Opdracht 19.2.2 & 19.2.3
/* --------------------------- */
/** @file **/

#ifndef DRAWABLE_HPP
#define DRAWABLE_HPP

#include <ostream>
#include "window.hpp"
#include "vector.hpp"

/** \brief
     * drawable superclass
     * \details
     * superclass for objects drawn on the screen
     * added: 2 call functions to get bounce vector values*/
class drawable {
protected:
   window w;
   vector location;
   vector size;
   vector bounce = vector(1, 1);
public:
   drawable( window & w, const vector & location, const vector & size );   
   bool overlaps( const drawable & other );
   /** \brief
     * call bounce X function
     * \details
     * checks bounce X of drawable */
   int giveBounceX();
   /** \brief
     * call bounce Y function
     * \details
     * checks bounce Y of drawable */
   int giveBounceY();
   virtual void draw() = 0;
   virtual void update(){}
   virtual void interact( drawable & other ){}
   
   std::ostream & print( std::ostream & out ) const;
};

std::ostream & operator<<( std::ostream & lhs, const drawable & rhs );

#endif // DRAWABLE_HPP
