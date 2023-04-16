#include <iostream>
#include <cmath>
using namespace std;
namespace ariel{
class Fraction{
    public:
    //Constructor
        Fraction(const Fraction&,const Fraction&);
        Fraction(const Fraction&,int);
        Fraction(int ,int);
        Fraction(int ,const Fraction&);
        Fraction();
        int get_deno();
        int get_nume();
};
ostream& operator<<(ostream&, const Fraction&);

 //Addition
        Fraction operator+(const Fraction&, const Fraction& );
        Fraction operator+(const Fraction&  , float );
        Fraction operator+(float  , const Fraction& );
    //Subtraction
        Fraction operator-(const Fraction&  , const Fraction& );
        Fraction operator-(const Fraction&  ,float);
        Fraction operator-(float  , const Fraction& );
    //Divison
        Fraction operator/(const Fraction&  , const Fraction& );
        Fraction operator/(const Fraction&  , float );
        Fraction operator/(float  , const Fraction& );
    //Mult
        Fraction operator*(const Fraction&  , const Fraction& );
        Fraction operator*(const Fraction&  , float );
        Fraction operator*(float  , const Fraction& );
    //greater than
        bool operator>(const Fraction&  , const Fraction& );
        bool operator>(const Fraction&  , float );
        bool operator>(float  , const Fraction& );
    //smaller then
        bool operator<(const Fraction&  , const Fraction& );
        bool operator<(const Fraction&  , float );
        bool operator<(float  , const Fraction& );
    //greater equal
        bool operator>=(const Fraction&  , const Fraction& );
        bool operator>=(const Fraction&  , float );
        bool operator>=(float  , const Fraction& );
    //smaller equal
        bool operator<=(const Fraction&  , const Fraction& );
        bool operator<=(const Fraction&  , float );
        bool operator<=(float  , const Fraction& );
    
    //==s
        bool operator==(const Fraction& , const Fraction&);
        bool operator==(const Fraction&  , float );
        bool operator==(float  , const Fraction& );

    //Pre-fix
        Fraction& operator++(Fraction&);
        Fraction& operator--(Fraction&);
    //Post-fix
        Fraction operator++(Fraction& , int);
        Fraction operator--(Fraction& , int);


}