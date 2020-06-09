#include "fraction.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

fraction::fraction()
{

}


fraction::fraction(int n,int d){
 denom=d;
 numer=n;
 number=(float(numer)/float(denom));
}


void fraction::setdenom (int d){
  if (d==0){
    exit(EXIT_FAILURE);
  }
  else {
    denom = d;
  }
}


void fraction::setnumer(int n){
   numer = n;
}

float fraction::getnum (){
   return number;
}



fraction fraction::operator+(fraction frac){
   fraction frac3;
   frac3.denom = (this->denom)*frac.denom;
   frac3.numer = ((this->numer)*frac.denom)+((this->denom)*frac.numer);
   frac3.reduction();
   return frac3;
}


fraction fraction::operator- (fraction frac){
  fraction frac3;
  frac3.denom = (this->denom)*frac.denom;
  frac3.numer = ((this->numer)*frac.denom)-((this->denom)*frac.numer);
  frac3.reduction();
  return frac3;
}



bool fraction::operator<(fraction frac){
  bool check;
  if ((this->number)<frac.number){
    check=true;
}
  else if ((this->number)>frac.number){
    check=false;
}
 return check;
}



bool fraction::operator>(fraction frac){
  bool check;
  if ((this->number)>frac.number){
    check=true;
}
  else if ((this->number)<frac.number){
    check=false;
}
  return check;
}



bool fraction::operator==(fraction frac){
  bool check;
  if ((this->number)==frac.number){
    check=true;
}
  else if ((this->number)!=frac.number){
    check=false;
}
  return check;
}



bool fraction::operator<=(fraction frac){
  bool check;
  if ((this->number)<=frac.number){
    check=true;
}
  else {
    check=false;
}
  return check;
}



bool fraction::operator>=(fraction frac){
  bool check;
  if ((this->number)>=frac.number){
    check=true;
}
  else {
    check=false;
}
 return check;
}



fraction fraction::operator=(fraction &frac){
  this->denom=frac.denom;
  this->numer=frac.numer;
  return *this;
}


ostream& operator<<(ostream& out ,fraction frac){
   out<<frac.numer<<" / "<<frac.denom<<endl;
   return out;
}


istream& operator>>(istream& in ,fraction& frac){
   cout<<"please, enter numerator :";
   in>>frac.numer;
   cout<<"please, enter denominator :";
   in>>frac.denom;
 return in;
}

int fraction::hcf(int n1, int n2)
{
    if (n2 != 0)
       return hcf(n2, n1 % n2);
    else
       return n1;
}

fraction fraction::reduction(){
 int x=hcf(this->numer,this->denom);
 this->numer = this->numer/x;
 this->denom = this->denom/x;
 return (*this);
}

fraction fraction :: operator *(fraction &frac){
fraction frac3;
frac3.numer =(this->numer) * frac.numer;
frac3.denom =(this->denom) * frac.denom;
frac3.reduction();
return frac3;
}

fraction fraction :: operator /(fraction &frac){
fraction frac3;
frac3.numer =(this->numer) * frac.denom;
frac3.denom =(this->denom) * frac.numer;
frac3.reduction();
    return frac3 ;
}
