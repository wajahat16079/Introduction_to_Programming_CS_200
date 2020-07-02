//asg 1 task 3

#include <iostream>
#include <string>
#include <cmath>
using namespace std;


long dec2bin(long n)
{
    long rem= 0;
    long i=1;
    long bin=0;
    while(n>0)
    {
        rem=n%2;
        bin=bin + (i*rem);
        n=n/2;
        i=i*10;
    }
    cout<<"Binary : "<<bin<<endl;
    return bin;
}


long bin2dec(long bin)
{
long dec = 0;
long rem;
long num;
long base =1;
while (bin > 0)
{
rem = bin % 10;
dec = dec + rem * base;
base = base * 2;
bin = bin / 10;
}
cout << "Decimal : " << dec << endl;
return dec;
}


void  dec2hexa(long n)
{

int x =0;
string y[5];
long rem= 0;


for (int a = n;a>0;a=a/16)
{
rem=a%16;

if(rem == 0)
{
y[x] ="0";
}
else if(rem == 1)
{
y[x] ="1";
}
else if(rem == 2)
{
y[x] ="2";
}
 else if(rem == 3)
{
y[x] ="3";
}
else if(rem == 4)
{
 y[x] ="4";
}
else if(rem == 5)
{
 y[x] ="5";
}
else if(rem == 6)
{
 y[x] ="6";
}
else if(rem == 7)
{
 y[x] ="7";
}
else if(rem == 8)
{
 y[x] ="8";
}
else if(rem == 9)
{
 y[x] ="9";
}
else if(rem == 10)
{
 y[x] ="a";
}
else if(rem == 11)
{
 y[x] ="b";
}
else if(rem == 12)
{
 y[x] ="c";
}
else if(rem == 13)
{
 y[x] ="d";
}
else if(rem == 14)
{
 y[x] ="e";
}
else if(rem == 15)
{
 y[x] ="f";
}
x=x+1;
}

if(x== 1)
{
cout<<"Hexadecimal : "<<y[0]<<endl;
}
else if(x== 2)
{
cout<<"Hexadecimal : "<<y[1]<<y[0]<<endl;
}
else if(x== 3)
{
cout<<"Hexadecimal : "<<y[2]<<y[1]<<y[0]<<endl;
}
else if(x== 4)
{
cout<<"Hexadecimal : "<<y[3]<<y[2]<<y[1]<<y[0]<<endl;
}
else if(x== 5)
{
cout<<"Hexadecimal : "<<y[4]<<y[3]<<y[2]<<y[1]<<y[0]<<endl;
}
}

long hexa2dec(string y)
{


long dec = 0;    

long n = y.length();
int power = 0;
for (int x=n-1;x>=0;x--)
{
if(y.substr(x,1) == "0")
{
dec= dec + 0*pow(16,power);
}
else if(y.substr(x,1) == "1")
{
dec= dec + 1*pow(16,power);
}
else if(y.substr(x,1) == "2")
{
dec= dec + 2*pow(16,power);
}
else if(y.substr(x,1) == "3")
{
dec= dec + 3*pow(16,power);
}
else if(y.substr(x,1) == "4")
{
dec= dec + 4*pow(16,power);
}
else if(y.substr(x,1) == "5")
{
dec= dec + 5*pow(16,power);
}
else if(y.substr(x,1) == "6")
{
dec= dec + 6*pow(16,power);
}
else if(y.substr(x,1) == "7")
{
dec= dec + 7*pow(16,power);
}
else if(y.substr(x,1) == "8")
{
dec= dec + 8*pow(16,power);
}
else if(y.substr(x,1) == "9")
{
dec= dec + 9*pow(16,power);
}
else if(y.substr(x,1) == "a")
{
dec= dec + 10*pow(16,power);
}
else if(y.substr(x,1) == "b")
{
dec= dec + 11*pow(16,power);
}
else if(y.substr(x,1) == "c")
{
dec= dec + 12*pow(16,power);
}
else if(y.substr(x,1) == "d")
{
dec= dec + 13*pow(16,power);
}
else if(y.substr(x,1) == "e")
{
dec= dec + 14*pow(16,power);
}
else if(y.substr(x,1) == "f")
{
dec= dec + 15*pow(16,power);
}
power = power+1;
}
cout<<"Decimal : "<<dec<<endl;
return dec;
}





int main()
{


int sys = 0;

long input_decimal = 0;
string input_hexa;
long input_binary = 0;


long hexabin = 0;
long hexadec = 0;
long decbin = 0;
long bindec = 0;
string dechexa = "0";
string binhexa = "0";

while (sys!=-1)
{
cout<<"Enter 1 for decimal number system"<<endl;
cout<<"Enter 2 for binary number system"<<endl;
cout<<"Enter 3 for hexadecimal number system"<<endl;
cout<<"Enter -1 to exit"<<endl;
cout<<"Enter your choice : ";
cin>>sys;

if(sys == 1)
{
cout<<"Enter a decimal number : ";
cin>>input_decimal;
cout<<endl;
cout<<"decimal : "<<input_decimal<<endl;
decbin = dec2bin(input_decimal); 
dec2hexa(input_decimal);
cout<<endl;
}
else if(sys == 2)
{
cout<<"Enter a binary number : ";
cin>>input_binary;
cout<<endl;
bindec = bin2dec(input_binary);
cout<<"binary : "<<input_binary<<endl;
dec2hexa(bindec);
cout<<endl;

}
else if(sys == 3)
{
cout<<"Enter a hexadecimal number : ";
cin>>input_hexa;
cout<<endl;
hexadec = hexa2dec(input_hexa); 
hexabin = dec2bin(hexadec);
cout<<"hexadecimal : "<<input_hexa<<endl;
cout<<endl;
}

}

return 0;
}

