/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 1 Opdracht 19.1.2 & 19.1.3
/* --------------------------- */

#ifndef TRAIN_HPP
#define TRAIN_HPP

#include "wagon.hpp"
#include "train_head.hpp"
#include <vector>

class train
{
private:
    int x;
    int y;
    window & w;
    int amount;
public:
    train( window & w, int x, int y, int amount):
        w(w),
        x(x),
        y(y),
        amount(amount)
    {}
    void print();
};

#endif // TRAIN_HPP
