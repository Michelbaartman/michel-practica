/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 2 Opdracht 19.2.2 & 19.2.3
/* --------------------------- */

#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>
#include <iomanip>
/// @file

/// \brief
/// vector class
/// \details
/// this is a vector class that stores 2 values: x and y.
/// both of these values are stored as int.
/// They are often used as co-ordinates.
class vector
{
private:
    int x, y;

public:
    /// \brief
    /// constructor from integer values
    /// \details
    /// Constructor that initializes a vector containing 2 int values
    /// Default values are 0
    vector( int x = 0, int y = 0 ):
        x(x), y(y)
    {}
    
    /** \brief
     ** output operator for vector
     ** \details
     ** This operator<< prints a constructor in the format
     ** [xx ,yy] where both values are printed as integer values.
     **/
    friend std::ostream & operator<<( std::ostream & lhs, const vector & rhs ){
        return lhs 
         << "[x" 
         << rhs.x 
         << ", y" 
         << rhs.y
         << "]";
    }   
    
    /** \brief
     ** compare operator for vectors
     ** \details
     ** checks if both vector values are equal, and returns either a true or false
     **/
   bool operator==( const vector & rhs ) const {
        vector temp(x, y);
        vector rhsTemp(rhs.x, rhs.y);
        return ( temp.x== rhsTemp.x ) && ( temp.y == rhsTemp.y );
   }
   
    /** \brief
     ** add operator for vectors
     ** \details
     ** counts 2 vectors together, then returns a new vector with the new values.
     **/
    vector operator+( const vector & rhs ){
        vector temp(x + rhs.x, y + rhs.y);
        return temp;
    }
    
    /** \brief
     ** extended add operator for vectors
     ** \details
     ** adds the rhs vector values to the lhs vector.
     **/
    vector & operator+=( const vector & rhs ){
        x += rhs.x;
        y += rhs.y;
        return *this;
    }
    
    /** \brief
     ** multiply operator for vectors
     ** \details
     ** multiplies vector by a given integer value, then returns a temp vector with the new values.
     **/
    vector operator*( const int & rhs ){
        vector temp(x * rhs, y * rhs);
        return temp;
    }
    
    /** \brief
     ** extended mutiply operator for vectors
     ** \details
     ** multiplies current vector with given integer.
     **/
    vector & operator*=( const int & rhs ){
        x = x * rhs;
        y = y * rhs;
        return *this;
    }
};

#endif // VECTOR_HPP
