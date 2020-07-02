#include <iostream>
#include <string>
#include<cmath>
using namespace std;

class fraction{

    private:
     int *nume;
     int *denom;
    public:
        friend void gcd1(int& a,int &b);
        fraction();
        fraction(int n,int d);
        fraction(const fraction &a);
        ~fraction();
        void setn(int n);
        void setd(int d);
        void operator = (fraction& a );
        friend ostream & operator<<(ostream &output, fraction &a);
        friend istream & operator>>(istream &input, fraction &a);
        friend fraction& operator ++(fraction& a );
        friend fraction& operator ++(fraction& a,int );
        friend fraction& operator --(fraction& a,int );
        friend fraction& operator --(fraction& a);
        friend fraction& operator +(fraction& a, fraction& b );
        friend fraction& operator -(fraction& a, fraction& b );
        friend fraction& operator *(fraction& a, fraction& b );
        friend fraction& operator /(fraction& a, fraction& b );
        friend bool operator ==(fraction& a, fraction& b );
};
