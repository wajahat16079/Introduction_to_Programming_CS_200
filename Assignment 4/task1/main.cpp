//#include"fraction.h"
//#include"fraction.cpp"
//#include"operation.h"
//#include"operation.cpp"
//#include"stack.h"
#include"stack.cpp"

#include <iostream>
#include <string>
#include<cmath>
using namespace std;
int main(){


    operation op(2);
    operation aa(1);
//    opertaion op1(1);
    stack s;

int z=0;
while(z!=-1){
        cout<<"Enter 1 for Addition"<<endl;
        cout<<"Enter 2 for Subtraction"<<endl;
        cout<<"Enter 3 for Multiplication"<<endl;
        cout<<"Enter 4 for Division"<<endl;
        cout<<"Enter 5 for compare"<<endl;
        cout<<"Enter 6 for pre increment"<<endl;
        cout<<"Enter 7 for post increment"<<endl;
        cout<<"Enter 8 for pre decrement"<<endl;
        cout<<"Enter 9 for post decrement"<<endl;
        cout<<"Enter 10 for pop last action"<<endl;
        cout<<"Enter 11 for print stack"<<endl;
    cin>>z;
    if(z==1){
        cin>>op;
        op.sets("+");
        cal(op);
        pushf(s,op);
        cout<<op<<endl;
       }
    else if(z==2){
    cin>>op;
        op.sets("-");
        cal(op);
        pushf(s,op);
        cout<<op<<endl;
    }
    else if(z==3){
    cin>>op;
        op.sets("*");
        cal(op);
        pushf(s,op);
        cout<<op<<endl;
    }
    else if(z==4){
        cin>>op;
        op.sets("/");
        cal(op);
        pushf(s,op);
        cout<<op<<endl;
    }
    else if(z==5){
        cin>>op;
        op.sets("==");
        cal(op);
        pushf(s,op);
        cout<<op<<endl;
    }
    else if(z==6){
cin>>aa;
        aa.sets("++");
        cal(aa);
        pushf(s,aa);
        cout<<aa<<endl;
    }
    else if(z==7){
cin>>aa;
        cin>>aa;
        aa.sets(".++");
        cal(aa);
        pushf(s,aa);
        cout<<aa<<endl;
    }
     else if(z==8){
     cin>>aa;
        aa.sets("--");
        cal(aa);
        pushf(s,aa);
        cout<<aa<<endl;
     }
     else if(z==9){
            cin>>aa;
        aa.sets(".--");
        cal(aa);
        pushf(s,aa);
        cout<<aa<<endl;
    }
     else if(z==10){
      popf(s);
    }
     else if(z==11){
       prints(s);
    }


}



 // while(1){
   // cin>>op;
   // cal(op);
   // pushf(s,op);
   // pushf(s,op1);
   // }
}
