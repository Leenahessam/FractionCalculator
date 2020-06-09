#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
#include <sstream>
#include <stdlib.h>
using namespace std;

class fraction
{
    private :
        int denom; /// el taht
        int numer; /// el fo2
        float number;
    public :
        fraction();
        fraction(int,int);
        void setdenom (int);
        void setnumer (int);
        float getnum();
        fraction operator+(fraction frac);
        fraction operator-(fraction frac);
        fraction operator=(fraction &frac);
        bool operator<(fraction frac);
        bool operator>(fraction frac);
        bool operator==(fraction frac);
        bool operator<=(fraction frac);
        bool operator>=(fraction frac);
        fraction operator *(fraction &frac);
        fraction operator /(fraction &frac);
        friend ostream& operator<<(ostream& out ,fraction frac);
        friend istream& operator>>(istream& in ,fraction& frac);
        int hcf(int , int );
        fraction reduction ();

};


#endif // FRACTION_H
