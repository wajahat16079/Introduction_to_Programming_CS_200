// asg1 task 1
// time function was learnt from a youtube video.
// date and time displayed is provided by DNS server so may vary on different  internet connectin provider
// used \t for allignment, learnt from a youtube video.
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{

int a = 0;
int b = 0;
int count = 0;
int total =0;
string output[4];
string y="0";
string z="0";

cout<<endl;
cout<<"\t\t\t\t****TODAY'S MENU****"<<endl;
cout<<endl;
cout<<"1 Beef: Price\t\t|standard Rs 100\t|\thalf Rs 60\t|\tquarter Rs 30 | "<<endl;
cout<<"2 soup: Price\t\t|standard Rs 100\t|\thalf Rs 60\t|\tquarter Rs 30 | "<<endl;
cout<<"3 Rice: Price\t\t|standard Rs 100\t|\thalf Rs 60\t|\tquarter Rs 30 |"<<endl;
cout<<"4 Daal: Price\t\t|standard Rs 100\t|\thalf Rs 60\t|\tquarter Rs 30 |"<<endl;
cout<<"5 dahi: Price\t\t|standard Rs 100\t|\thalf Rs 60\t|\tquarter Rs 30 |"<<endl;
cout<<endl;
for (int x=1;x<4;x++)
 {
     count = count+1;
cout<<"Chose item number 1-5 or -1 to exit : ";
cin>>a;
 while(a<-1 || a>5 )
{
cout<<"Error…!! Please chose between 1-5 : ";
cin>>a;
}

if (a== -1)
{
    count = count-1;
    break;
}

cout<<"Chose portion 1-3 : ";
cin>>b;
 while(b<1 || b>3)
{
cout<<"Error…!! Please chose between 1-3 : ";
cin>>b;
}
 
 if(a == 1 && b == 1)
 {
output[x] = "\tbeef \tfull \t\t100";
total=total+100;
 }
else if(a == 1 && b == 2)
 {
output[x] = "\tbeef \thalf \t\t60";
total=total+60;
}
else if(a == 1 && b == 3)
 {
     output[x] = "\tbeef \tquarter \t30";
 total=total+30;
 }

else if(a == 2 && b == 1)
 {
output[x] = "\tsoup \tfull \t\t100";
total=total+100;
}
else if(a == 2 && b == 2)
 {
output[x] = "\tsoup \thalf \t\t60";
 total=total+60;
 }
else if(a == 2 && b == 3)
 {
output[x] = "\tsoup \tquarter \t30";
 total=total+30;
 }
else if(a == 3 && b == 1)
 {
output[x] = "\tRice \tfull \t\t100";
total=total+100;
}
else if(a == 3 && b == 2)
 {
output[x] = "\tRice \thalf \t\t60";
 total=total+60;
 }
else if(a == 3 && b == 3)
 {
output[x] = "\tRice \tquarter \t30";
total=total+30;
}

else if(a == 4 && b == 1)
 {
     output[x] = "\tdaal \tfull \t\t100";
total=total+100;
}
else if(a == 4 && b == 2)
 {
     output[x] = "\tdaal \thalf \t\t60";
     total=total+60;
     }
else if(a == 4 && b == 3)
 {
     output[x] = "\tdaal \tquarter \t30";
     total=total+30;
     }

else if(a == 5 && b == 1)
 {
     output[x] = "\tdahi \tfull \t\t100";
     total=total+100;
     }
else if(a == 5 && b == 2)
 {
output[x] = "\tdahi \thalf \t\t60";
 total=total+60;
 }
else if(a == 5 && b == 3)
 {
	output[x] = "\tdahi \tquarter \t30";
total=total+30;
}

else if(a>5 || a==0 || a<-1)
{
	cout<<"invalid input"<<endl;
}
}


cout<<endl;
cout<<"\t\t*************"<<endl;
time_t now;
struct tm nowLocal;
now = time(NULL);
nowLocal =*localtime(&now);
if(nowLocal.tm_mon+1 == 1)
{
y="January";
}
else if(nowLocal.tm_mon+1 == 2)
{
y="February";
}
else if(nowLocal.tm_mon+1 == 3)
{
y="March";
}
else if(nowLocal.tm_mon+1 == 4)
{
y="April";
}
else if(nowLocal.tm_mon+1 == 5)
{
y="May";
}
else if(nowLocal.tm_mon+1 == 6)
{
y="June";
}
else if(nowLocal.tm_mon+1 == 7)
{
y="July";
}
else if(nowLocal.tm_mon+1 == 8)
{
y="August";
}
else if(nowLocal.tm_mon+1 == 9)
{
y="September";
}
else if(nowLocal.tm_mon+1 == 10)
{
y="October";
}
else if(nowLocal.tm_mon+1 == 11)
{
y="November";
}
else if(nowLocal.tm_mon+1 == 12)
{
y="December";
}


if(nowLocal.tm_hour>=12 && nowLocal.tm_hour<=24 )
{
    z="PM";
    nowLocal.tm_hour= nowLocal.tm_hour-12;
}

else if(nowLocal.tm_hour<12 && nowLocal.tm_hour>=0)
{
    z="AM";
}
if(nowLocal.tm_hour==0)
{
    nowLocal.tm_hour=12;
}



cout.width(20);
cout<<"Date: "<<y<<" "<<nowLocal.tm_mday<<","<<nowLocal.tm_year+1900<<endl;
cout.width(20);
cout<<"Time: "<<nowLocal.tm_hour<<":"<<nowLocal.tm_min<<":"<<nowLocal.tm_sec<<" "<<z<<endl;
cout.width(5);
cout<<"\t\t*************"<<endl;

output[0] ="Sr.No \titem \tportion \tprice";

cout<<output[0]<<endl;

if (count==1)
{
    cout<<"1"<<output[1]<<endl;
}
else if (count==2)
{
    cout<<"1"<<output[1]<<endl;
    cout<<"2"<<output[2]<<endl;
}
else if (count==3)
{
    cout<<"1"<<output[1]<<endl;
    cout<<"2"<<output[2]<<endl;
    cout<<"3"<<output[3]<<endl;
}
cout<<endl;
cout<<"\t\tItem Count:\t"<<count<<endl;
cout<<"\t\tTotal:\t\t"<<total<<endl;
cout<<endl;

return 0;
}

