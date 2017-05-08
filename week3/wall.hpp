/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 2 Opdracht 19.2.2 & 19.2.3
/* --------------------------- */
/** @file **/

#ifndef WALL_HPP
#define WALL_HPP

#include "window.hpp"
#include "vector.hpp"
#include "rectangle.hpp"

/** \brief
     * wall class
     * \details
     * creates a rectangle-based wall and fills it. */
class wall : public rectangle {
private:
    vector start, end;
    bool filled;
    int update_interval;
    int update_count = 0;
public:
    wall( window & w, const vector & start, const vector & end, const vector & bounce);
    /** \brief
     * update function
     * \details
     * fills rectangle */
    void update() override;
};

#endif // WALL_HPP
