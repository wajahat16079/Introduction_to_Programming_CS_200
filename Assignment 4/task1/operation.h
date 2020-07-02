#include"fraction.cpp"
#include <iostream>
#include <string>
#include<cmath>
using namespace std;



class operation{

private:
     fraction *operands;
     fraction result;
     int operandcount;
     string symbol;
public:

    operation();
    operation(int oc);
    operation& operator =(operation &a);
    operation(operation &a);
    ~operation();
    void sets(string s);
    void setr(fraction r);
    void setoc( int o);
    int getoc();
    string gets();
    fraction getr();
    friend ostream & operator<<(ostream &output, operation &a);
    friend istream & operator>>(istream &input, operation &a);
    friend void cal(operation &a);
};
