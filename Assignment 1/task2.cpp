// asg 1 task 2
#include <iostream>
#include <string>
#include <cmath> 
using namespace std;
int main()
{
int snum = 0;
int sdenom = 0;

int mod1=0;
int mod2=0;

int a =0;
int min=0;
int gcd = 0;


int num =0;
int denom =0;

int c = 0;
int n1 = 0;
int d1 = 0;
int n2 = 0;
int d2 = 0;

char cc ='o';

int z =1;

while(z!= -1)
{
cout<<"Press 1 for addition"<<endl;
cout<<"Press 2 for subtraction"<<endl;
cout<<"Press 3 for multiplication"<<endl;
cout<<"Press 4 for division"<<endl;
cout<<"Press 5 for inverse"<<endl;
cout<<"Press -1 to exit"<<endl;
cout<<"Enter your choice: ";
cin>>c;
while(c<1 || c>5)
{
cout<<"Error…!! chose between 1-5 : ";
cin>>c;
}



cout<<"Enter numerator for first fractional number: ";
cin>>n1;
cout<<"Enter denominator for first fractional number: ";
cin>>d1;
while(d1==0)
{
cout<<"Error…!! Denominator can’t be zero..!!"<<endl;
cout<<"Enter denominator for first fractional number: ";
cin>>d1;
}

if (c == 5)
{
num = d1;
denom = n1;

mod1=abs(num);
mod2 =abs(denom);


if (mod1<mod2)
{
min = mod1;
}
 else
{
min = mod2;
}
a = min;
while ( a >= 1 )             
{
if ( mod1 % a == 0  &&  mod2 % a == 0 )
{  
gcd = a;   
break;                    
}
else
{
a--;                      
}
}
 
snum = num/gcd;
sdenom = denom/gcd;

cout<<endl;
cout<<"\t\t*******RESULT*******"<<endl;
cout<<"\t\t "<<n1<<"/"<<d1<<" "<<"inverse = "<<snum<<"/"<<sdenom<<endl;
cout<<"\t\t********************"<<endl;
cout<<endl;
cout<<" Enter any number to continue and -1 to exit ";
cin>>z;



}

else if (c!= 5)
{
cout<<"Enter numerator for second fractional number: ";
cin>>n2;
cout<<"Enter denominator for second fractional number: ";
cin>>d2;
while(d2==0)
{
cout<<"Error…!! Denominator can’t be zero..!!"<<endl;
cout<<"Enter denominator for second fractional number: ";
cin>>d2;
}


switch (c)
{
case 1:
num = ((n1*d2)+(n2*d1));
denom = (d1*d2);
cc = '+';
break;

case 2:
num = ((n1*d2)-(n2*d1));
denom = (d1*d2);
cc = '-';
break;

case 3:
num = (n1*n2);
denom = (d1*d2);
cc = '*';
break;

case 4:
num = (n1*d2);
denom = (n2*d1);
cc = '/';
break;
}


mod1=abs(num);
mod2 =abs(denom);


if (mod1<mod2)
{
min = mod1;
}
 else
{
min = mod2;
}
a = min;
while ( a >= 1 )             
{
if ( mod1 % a == 0  &&  mod2 % a == 0 )
{  
gcd = a;   
break;                    
}
else
{
a--;                      
}
}
 
snum = num/gcd;
sdenom = denom/gcd;

cout<<endl;
cout<<"\t\t*******RESULT*******"<<endl;
cout<<"\t\t "<<n1<<"/"<<d1<<" "<<cc<<" "<<n2<<"/"<<d2<<" = "<<snum<<"/"<<sdenom<<endl;
cout<<"\t\t********************"<<endl;
cout<<endl;
cout<<" Enter any number to continue and -1 to exit ";
cin>>z;

}
}
return 0;
}


