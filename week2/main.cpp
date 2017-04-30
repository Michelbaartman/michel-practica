/* --------------------------- */
//  Michel Baartman
//  1696929
//  Jorn Bunk
//  Week 2 Opdracht 19.2.2 & 19.2.3
/* --------------------------- */

#include "ostream"
#include "rational.hpp"
#include "vector.hpp"

// needed to get Catch working with MinGW
#define TWOBLUECUBES_CATCH_REPORTER_JUNIT_HPP_INCLUDED
namespace Catch{ class JunitReporter{ ~JunitReporter(); }; };

#include "catch_with_main.hpp"

TEST_CASE( "constructor, two_parameters" ){
   rational v( 3, 4 );
   std::stringstream s;
   s << v;
   REQUIRE( s.str() == "[3/4]" );   
}


TEST_CASE( "constructor, high_paramters hex" ){
    rational v(52, 126);
    std::stringstream s;
    s << v;
    REQUIRE( s.str() == "[52/126]");
}
TEST_CASE( "equality, equal" ){
   rational v( 1, 2 );
   REQUIRE( v == rational( 1, 2 ) ); 
}

TEST_CASE( "equality, unequal" ){
   rational v( 1, 2 );
   REQUIRE( ! ( v == rational( 1, 3 )) ); 
}

TEST_CASE( "constructor, two_parameters; reduction" ){
   rational v( 10, 2 );
   REQUIRE( v == rational( 5, 1 ) ); 
}

TEST_CASE( "constructor, one parameter" ){
   rational v( 6 );
   REQUIRE( v == rational( 6, 1 ) );   
}

TEST_CASE( "multiply by integer" ){
   rational v( 3, 4 );
   rational x = v * 7;
   REQUIRE( v == rational( 3, 4 ) );   
   REQUIRE( x == rational( 21, 4 ) );   
}

TEST_CASE( "multiply by integer; reduction" ){
   rational v( 3, 10 );
   rational x = v * 5;
   REQUIRE( v == rational( 3, 10 ) );   
   REQUIRE( x == rational( 3, 2 ) );   
}

TEST_CASE( "multiply by rational" ){
   rational v( 3, 4 );
   rational x = v * rational( 9, 7 );
   REQUIRE( v == rational( 3, 4 ) );   
   REQUIRE( x == rational( 27, 28 ) );   
}

TEST_CASE( "multiply by rational; reduction" ){
   rational v( 3, 10 );
   rational x = v * rational( 4, 6 );
   REQUIRE( v == rational( 3, 10 ) );   
   REQUIRE( x == rational( 1, 5 ) );   
}

TEST_CASE( "add rational into rational" ){
   rational v( 3, 10 );
   v += rational( 6, 7 ); 
   REQUIRE( v == rational( 81, 70 ) );     
}

TEST_CASE( "add rational into rational; reduction" ){
   rational v( 23, 147 );
   v += rational( 5, 91 ); 
   REQUIRE( v == rational( 404, 1911 ) );     
}

TEST_CASE( "add rational into rational; return value" ){
   rational v( 1, 2 );
   rational x = ( v += rational( 1, 4 )); 
   REQUIRE( v == rational( 3, 4 ) );     
   REQUIRE( x == rational( 3, 4 ) );     
}

TEST_CASE( "multiply rational into rational" ){
   rational v( 3, 10 );
   v *= rational( 1, 2 ); 
   REQUIRE( v == rational( 3, 20 ) );     
}

TEST_CASE( "multiply rational into rational; reduction" ){
   rational v( 2, 3 );
   v *= rational( 3, 2 ); 
   REQUIRE( v == rational( 1, 1 ) );     
}

TEST_CASE( "multiply rational into rational; return value" ){
   rational v( 3, 10 );
   rational x = ( v *= rational( 1, 2 )); 
   REQUIRE( x == rational( 3, 20 ) );     
}

// vector class tests

TEST_CASE( "constructor, string (<<)" ){
   vector v(5, 2);
   std::stringstream s;
   s << v;
   REQUIRE( s.str() == "[x5, y2]" );   
}

TEST_CASE( "equal check (==)" ){
    vector v(2, 4);
   REQUIRE( v == vector(2, 4) );   
}

TEST_CASE( "add (+)" ){
    vector v1(2, 4);
    v1 = v1 + v1;
   REQUIRE( v1 == vector(4, 8) );   
}

TEST_CASE( "add part II (+=)" ){
    vector v1(2, 4);
    vector v2(3, 5);
    v1 += v2;
   REQUIRE( v1 == vector(5, 9) );   
}

TEST_CASE( "multiply (*)" ){
    vector v1(2, 4);
    v1 = v1 * 2;
   REQUIRE( v1 == vector(4, 8) );   
}

TEST_CASE( "multiply part II (*=)" ){
    vector v1(2, 4);
    v1 *= 2;
   REQUIRE( v1 == vector(4, 8) );   
}

