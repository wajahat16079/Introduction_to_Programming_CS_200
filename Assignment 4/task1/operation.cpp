#include"operation.h"
#include <iostream>
#include <string>
#include<cmath>
using namespace std;

operation :: operation(){
    operandcount=0;
    operands = new fraction[operandcount];
    result.setn(0);
    result.setd(1);
    symbol="0";
}


operation :: operation(int oc){
    operands = new fraction[oc];
    operandcount=oc;
    }

operation& operation :: operator =(operation &a){
    operands = new fraction[a.operandcount];
    for(int i=0;i<a.operandcount;i++)
        operands[i] = a.operands[i];
    result = a.result;
    operandcount = a.operandcount;
    symbol = a.symbol;
    return *this;
    }

 operation ::   operation(operation &a){
    operands = new fraction[a.operandcount];
    for(int i=0;i<a.operandcount;i++){
        operands[i] = a.operands[i];
    }
    result = a.result;
    operandcount = a.operandcount;
    symbol = a.symbol;
    }

operation :: ~operation(){
           delete [] operands;
    }


void operation :: sets(string s){
             symbol = s ;
    }

void operation :: setr(fraction r){
    result = r;
    }

void operation :: setoc( int o){
 operandcount= o;
    }


int operation :: getoc(){
 int oc= operandcount;
 return oc;
    }
 string operation :: gets(){
 string oc= symbol;
 return oc;
    }
fraction operation :: getr(){
fraction r = result;
return r;
}

 ostream & operator<<(ostream &output, operation &a){
cout<<"Operator : ";
cout<<a.symbol<<endl;
for (int i=0;i<a.operandcount;i++){
cout<<"Operand"<<i+1<<" : ";
output<<a.operands[i];
 }
cout<<"Result : ";
cout<<a.result<<endl;
return output;
}

istream & operator>>(istream &input, operation &a){
for (int i=0;i<a.operandcount;i++)
input>>a.operands[i];

return input;
}

void cal(operation &a){
    if(a.symbol == "+")
    {
        a.result = a.operands[0] + a.operands[1];
    }
    else if(a.symbol == "-")
    {
        a.result = a.operands[0] - a.operands[1];
    }
    else if(a.symbol == "*")
    {
        a.result = a.operands[0] * a.operands[1];
    }
    else if(a.symbol == "/")
    {
        a.result = a.operands[0] / a.operands[1];
    }
    else if(a.symbol == "++")
    {
        a.result = ++a.operands[0];
    }
    else if(a.symbol == ".++")
    {
        a.result = a.operands[0]++;
    }
    else if(a.symbol == ".--")
    {
        a.result = a.operands[0]--;
    }
    else if(a.symbol == "---")
    {
        a.result = a.operands[0]--;
    }
     else if(a.symbol == "==")
    {
        if(a.operands[0] == a.operands[1]){
        fraction b(1,1);
        a.result =b;
        }
        else{
        fraction c(0,1);
        a.result =c;
        }
    }
}

