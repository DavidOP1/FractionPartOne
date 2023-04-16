#include "sources/Fraction.hpp"
#include <iostream>
#include "doctest.h"
#include <limits>

using namespace std;
using namespace ariel;


TEST_CASE("DIVISON BY ZERO"){
    CHECK_THROWS(Fraction(1,0));
    CHECK_THROWS((Fraction(1,1))/0);
    CHECK_THROWS((Fraction(1,1))/(Fraction(0,1)));
    CHECK_THROWS((Fraction(1,1))/(Fraction(2,3)-Fraction(2,3)));
}

TEST_CASE("CHECK RESULTS"){
    Fraction a(3,4), b(3,4) , c(6,8);
    Fraction d = a-b;
    Fraction g = a-c;
    CHECK(d==g);
    //deno is the bottom of the frac , nume is the top of the frac.
    CHECK(((d.get_deno())&&(!d.get_nume())));
    CHECK(((g.get_deno())&&(!g.get_nume())));
}

TEST_CASE("CHECK IN LOOP"){
    Fraction b(7,1) , c(0,1) , d(16,1);

    for(Fraction a(0,1); a<=b ; a++){
        c = c+2;
    };
    CHECK(c==16);
    CHECK(c==d);
    c = Fraction(0,1);
    for(Fraction a(0,1); a<=7 ; a++){
        c = c+2;
    };
    CHECK(c==d);
    CHECK(c==16);
}

TEST_CASE("CHECK OPERANDS"){
    Fraction a(-5,10),b(-1,1);
    CHECK((a*b)==0.5);

    //Need to know how many digits to display after the dot.
    CHECK((((a*2.345)==1.1725)||((a*2.345)==1.172)));

    Fraction c(1,1);
    Fraction  d = c++;
    CHECK(d==1);
    d = ++c;
    CHECK(((d==c) && (d==2)));

    Fraction f(numeric_limits<int>::max(),1) , g(numeric_limits<int>::min(),1);

    CHECK_THROWS(f+d);
    CHECK_NOTHROW(f-d);
    CHECK_THROWS(g-d);
    CHECK_NOTHROW(g+d);
    CHECK(f+g==-1);
}