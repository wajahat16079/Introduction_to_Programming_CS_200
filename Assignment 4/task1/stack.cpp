#include"stack.h"
#include <iostream>
#include <string>
#include<cmath>
using namespace std;

stack :: stack(){
    size=0;
    list = new operation[size];
}

stack :: stack(int s){
    size=s;
    list = new operation[size];
}


void pushf(stack &a, operation& d){
    stack c;
    c.size=a.size+1;
    c.list= new operation[c.size];
        for(int i=0;i<a.size;i++){
                  c.list[i] = a.list[i];
                }
    c.list[c.size-1] = d;
        delete[] a.list;
        a.size = c.size;
    a.list= new operation[a.size];
        for(int i=0;i<a.size;i++){
                  a.list[i] = c.list[i];
                }
    delete[] c.list;

}

void popf(stack &a){
    stack c;
    c.size=a.size-1;
    c.list= new operation[c.size];
        for (int i =0;i<c.size;i++)
        {
                c.list[i] = a.list[i];
        }

    delete[] a.list;
    a.size = c.size;
    a.list = new operation[a.size];
    cout<<a.size<<endl;
        for (int i =0;i<a.size;i++)
        {
                a.list[i] = c.list[i];
        }

}


void prints(stack &a){
    for (int i =0;i<a.size;i++)
    {
            cout<<a.list[i];

    }

}



