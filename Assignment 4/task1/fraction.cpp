#include"fraction.h"
#include <iostream>
#include <string>
#include<cmath>
using namespace std;
void gcd1(int& a,int &b){
int mod1=abs(a);
    int mod2 =abs(b);
    int min;
    int gcd;
    if (mod1<mod2)
    {
        min = mod1;
    }
     else
    {
        min = mod2;
    }
    int x1 = min;
    while ( x1 >= 1 )
    {
    if ( mod1 % x1 == 0  &&  mod2 % x1 == 0 )
    {
    gcd = x1;
    break;
    }
    else
    {
    x1--;
    }
    }

    a = a/gcd;
    b = b/gcd;

}

 fraction ::  fraction(int n,int d){
    nume = new int;
    denom= new int;
             *nume = n ;
             *denom = d ;
    }
  fraction ::  fraction(){
    nume = new int;
    denom = new int;
    *nume=0;
    *denom=1;
    }



fraction :: fraction(const fraction &a){
    nume = new int;
    denom= new int;
             *nume = *a.nume ;
             *denom = *a.denom ;
    }

fraction :: ~fraction(){
    delete nume;
    delete denom;
}




void fraction :: setn(int n){
         nume = new int;
             *nume = n ;
}

void fraction :: setd(int d){
        denom= new int;
             *denom = d ;
}


void fraction :: operator = (fraction& a ){
    nume = new int;
    denom = new int;
             *nume = *a.nume ;
             *denom = *a.denom ;
   }


ostream & operator<<(ostream &output, fraction &a){
        //cout<<"OPERAND:";
        output<<*a.nume<<"/"<<*a.denom<<endl;
        return output;
}

istream & operator>>(istream &input, fraction &a){
        cout<<"enter numerator"<<endl;
        input >> *a.nume ;

        while(1){
                cout<<"enter denominator"<<endl;
        input>> *a.denom;
        if(*a.denom != 0)
        {
            break;
        }cout<<"denominator cannot be zero"<<endl;
        }
        return input;
}


fraction& operator ++(fraction& a ){
         fraction c;

 int *z,*z1;
z=a.nume;
z1=a.denom;
        int nc = (1) * (*z) + (*z1) * (1);
        int dc = (1)*(*z1);
            gcd1(nc,dc);
                 *c.nume = nc ;
                 *c.denom = dc ;
            return c;
    }

fraction& operator ++(fraction& a,int ){
     fraction c;

 int *z,*z1;
z=a.nume;
z1=a.denom;
        int nc = (1) * (*z) + (*z1) * (1);
        int dc = (1)*(*z1);
            gcd1(nc,dc);
                 *c.nume = nc ;
                 *c.denom = dc ;
            return c;
    }

fraction& operator --(fraction& a,int ){
 fraction c;

 int *z,*z1;
z=a.nume;
z1=a.denom;
    int nc = (1) * (*z) - (*z1) * (1);
    int dc = (1)*(*z1);
        gcd1(nc,dc);
             *c.nume = nc ;
             *c.denom = dc ;
        return c;
    }

fraction& operator --(fraction& a){
 fraction c;
 int *z,*z1;
z=a.nume;
z1=a.denom;
    int nc = (1) * (*z) - (*z1) * (1);
    int dc = (1)*(*z1);
        gcd1(nc,dc);
             *c.nume = nc ;
             *c.denom = dc ;
        return c;
    }

fraction& operator +(fraction& a, fraction& b ){
    int *z,*z1,*z2,*z3;
    z=a.nume;
    z1=a.denom;
    z2=b.nume;
    z3=b.denom;
    int nc = (*z3) * (*z) + (*z1) * (*z2);
    int dc = (*z3)*(*z1);
    fraction c;
    c.nume = new int;
    c.denom= new int;
     gcd1(nc,dc);
             *c.nume = nc ;
             *c.denom = dc ;
    return c;
    }

fraction& operator -(fraction& a, fraction& b ){
    int *z,*z1,*z2,*z3;
    z=a.nume;
    z1=a.denom;
    z2=b.nume;
    z3=b.denom;
    int nc = (*z3) * (*z) - (*z1) * (*z2);
    int dc = (*z3)*(*z1);
    fraction c;
    c.nume = new int;
    c.denom= new int;
       gcd1(nc,dc);
             *c.nume = nc ;
             *c.denom = dc ;
    return c;
    }

fraction& operator *(fraction& a, fraction& b ){
    int *z,*z1,*z2,*z3;
    z=a.nume;
    z1=a.denom;
    z2=b.nume;
    z3=b.denom;
    int nc = (*z) * (*z2);
    int dc = (*z3)*(*z1);
    fraction c;
    c.nume = new int;
    c.denom= new int;
       gcd1(nc,dc);
             *c.nume = nc ;
             *c.denom = dc ;

    return c;
    }

fraction& operator /(fraction& a, fraction& b ){
    int *z,*z1,*z2,*z3;
    z=a.nume;
    z1=a.denom;
    z2=b.nume;
    z3=b.denom;
    int nc = (*z) * (*z3);
    int dc = (*z2)*(*z1);
    fraction c;
    c.nume = new int;
    c.denom= new int;
       gcd1(nc,dc);
             *c.nume = nc ;
             *c.denom = dc ;

    return c;
    }


bool operator ==(fraction& a, fraction& b ){
  void gcd1(int& a,int &b);
    int *z,*z1,*z2,*z3;
    z=a.nume;
    z1=a.denom;
    z2=b.nume;
    z3=b.denom;
    int nc = (*z);
    int dc = (*z1);
    int nc1 = (*z2);
    int dc1 = (*z3);
    gcd1(nc,dc);
    gcd1(nc1,dc1);
    if(nc==nc1 && dc==dc1){
        return true;
    }
    return false;
    }
