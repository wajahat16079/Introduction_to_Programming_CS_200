//#include"fraction.cpp"
#include"operation.cpp"
#include <iostream>
#include <string>
#include<cmath>
using namespace std;
class stack{
 private:
 operation *list;
 int size;
 public:
stack();
stack(int s);
friend void pushf(stack &a, operation& d);
friend void popf(stack &a);
friend void prints(stack &a);
};

