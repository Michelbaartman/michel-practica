/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 2 Opdracht 19.2.2 & 19.2.3
/* --------------------------- */
/** @file **/

#ifndef LINE_HPP
#define LINE_HPP

#include "window.hpp"
#include "vector.hpp"
#include "drawable.hpp"

/** \brief
     * line class
     * \details
     * creates a line from start to end
     * added: 3 functions to control the line */
class line : public drawable {
private:
   vector end;
public:
   line( window & w, const vector & location, const vector & end ):
      drawable( w, location, end - location ),
      end( end )
   {}
   void draw() override;
   /** \brief
     * call end function
     * \details
     * calls end of line */
   vector getEnd();
   /** \brief
     * call start function
     * \details
     * calls start of line */
   vector getStart();
   /** \brief
     * change line function
     * \details
     * changes line with new coords */
   void changeLine( const vector & start, const vector & end );
};

#endif // LINE_HPP
