/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 2 Opdracht 19.2.2 & 19.2.3
/* --------------------------- */


#ifndef VICTIM_HPP
#define VICTIM_HPP

#include "window.hpp"
#include "vector.hpp"
#include "rectangle.hpp"

/** \brief
     * victim class
     * \details
     * creates a rectangle that servers as target for balls. gets smaller the more often it gets hit */
class victim : public rectangle
{
private:
public:
    victim( window & w, const vector & start, const vector & end );
    /** \brief
     * update function
     * \details
     * if this object gets hit, makes it smaller */
    void update() override;

};

#endif // VICTIM_HPP
