#include "Fraction.hpp"
#include <iostream>
#include <cmath>
#include <numeric>

using namespace std;

namespace ariel{
    //<<
    //I was having alot of trouble with this function, since I didn't define at as const or a friend in .hpp
    //So I used the internet for a solution.
        ostream& operator<<(ostream& os, const Fraction& frac){
            return os;
        };
        
    //Constructor
    //do get transform in constructors as well.
        int Fraction::get_deno(){return 1;};
        int Fraction::get_nume(){return 1;};
        Fraction::Fraction(){};
        Fraction::Fraction(const Fraction& first ,const Fraction& second){
        };
        Fraction::Fraction(const Fraction& first ,int second){
        };
        Fraction::Fraction(int first,int second){
            try{
                if(!second){
                    throw("divided by zero!");
                }
            }catch(exception e){
                cout << "error: " << endl;
            }
        };
        Fraction::Fraction(int first,const Fraction& second){
        };

   


    //Addition
        Fraction operator+(const Fraction& first,const Fraction& second){return Fraction(1,1);};
        Fraction operator+(float first, const Fraction& second){return Fraction(1,1);};
        Fraction operator+(const Fraction& first , float second){return Fraction(1,1);};
    //Subtraction
        Fraction operator-(const Fraction& first, const Fraction& second){return Fraction(1,1);};
        Fraction operator-(const Fraction& first, float second){return Fraction(1,1);};
        Fraction operator-(float  first, const Fraction& second){return Fraction(1,1);};
    //Divison
        Fraction operator/(const Fraction& first , const Fraction& second){return Fraction (1,1);};
        Fraction operator/(const Fraction&  first, float second){return Fraction(1,1);};
        Fraction operator/(float  , const Fraction& ){return Fraction(1,1);};
    //Mult
        Fraction operator*(const Fraction&  first, const Fraction& second){return Fraction(1,1);};
        Fraction operator*(const Fraction&  first, float second){return Fraction(1,1);};
        Fraction operator*(float  first , const Fraction& second){return Fraction(1,1);};
    //greater than
        bool operator>(const Fraction&  first , const Fraction& second){return false;};
        bool operator>(const Fraction& first , float second){return false;};
        bool operator>(float  first, const Fraction& second){return false;};
    //smaller then
        bool operator<(const Fraction&  first, const Fraction& second){return false;};
        bool operator<(const Fraction&  first, float second){return false;};
        bool operator<(float  first, const Fraction& second){return false;};
    //greater equal
        bool operator>=(const Fraction&  first, const Fraction& second){return false;};
        bool operator>=(const Fraction&  first, float second){return false;};
        bool operator>=(float  first, const Fraction& second){return false;};
    //smaller equal
        bool operator<=(const Fraction&  first, const Fraction& second){return false;};
        bool operator<=(const Fraction&  first, float second){return false;};
        bool operator<=(float  first, const Fraction& second){return false;};
    //==
        bool operator==(const Fraction&  first, const Fraction& second){return false;};
        bool operator==(const Fraction&  first, float second){return false;};
        bool operator==(float  first, const Fraction& second){return false;};
    ////Pre-fix
        Fraction& operator++(Fraction& first){return first;};
        Fraction& operator--(Fraction& first){return first;};
    //Post-fix
        Fraction operator++(Fraction& first,int incerement){return first;};
        Fraction operator--(Fraction& first,int increment){return first;};

    
}