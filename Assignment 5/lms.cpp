#include"lms.h"
#include<iostream>
#include<string>
using namespace std;
assignment :: assignment(){
        asg="**";
        date="01-01-2016";
    }
assignment :: assignment(string a, string b){
    asg=a;
    date=b;
    }

 assignment& assignment ::operator =(assignment &a){
        asg=a.asg;
        date=a.date;
    }
void assignment ::  setassignment(){
    string a,b;
    cout<<"Enter name of Assignment : ";
    cin>>a;
    cout<<"Enter due date mm/dd/yyyy: ";
    cin>>b;
    asg=a;
    date=b;
    }
void assignment :: printassignment(){
    cout<<"Assignment : "<<asg<<endl;
    cout<<"Due Date : "<<date<<endl;
    cout<<endl;
    }

resources :: resources(){
        res="**";
    }
resources :: resources(string a){
    res=a;
    }
resources& resources :: operator =(resources &a){
        res=a.res;
    }
void resources :: setresource(){
    string a,b;
    cout<<"Enter name of Resource : ";
    cin>>a;
    res=a;
    }
void resources :: printresource(){
    cout<<"Resource : "<<res<<endl;
    cout<<endl;
    }


marks :: marks(){
    m=0;
    }
    marks :: marks(double a){
    m=a;
    }
    marks& marks :: operator =(marks &a){
        m=a.m;
    }
    void marks :: setmark(){
    double a;
    cout<<"Enter marks : ";
    cin>>a;
    m=a;
    }
    void marks :: printmark(){
        cout<<"Marks : "<<m<<endl;
        cout<<endl;
    }

lms :: lms(){
    fn="*";
    ln="*";
    pass="*";
    user="*";
}
lms :: lms(string a,string b,string c,string d){
    fn=a;
    ln=b;
    pass=c;
    user=d;
}
void lms ::  print(){
    cout<<"Name : "<<fn<<" "<<ln<<endl;
    }
void lms :: setfn(string a){
    fn=a;
    }
void lms ::setln(string a){
    ln=a;
    }
void lms :: setpass(string a){
    pass=a;
    }
void lms :: setuser(string a){
    user=a;
    }
string lms :: getfn( ){
    return fn;
    }
string lms :: getln(){
    return ln;
    }
string lms :: getpass(){
    return pass;
    }
string lms :: getuser(){
    return user;
    }


//----------------------------------------------------------------


student :: student():lms(){
    roll = 0;
    status="*";
    }
student :: student(string a,string b,string c,string d, string e,int f):lms(a,b,c,d){
        roll = f;
        status=e;
    }
void student :: setroll(int a){
        roll=a;
    }
void student :: setstatus(string a){
        status=a;
    }
int student :: getroll(){
        return roll;
    }
string student :: getstatus(){
    return status;
    }
void student :: print(){
    lms :: print();
    cout<<"Roll number : "<<roll<<endl;
    cout<<"Status : "<<status<<endl;
    cout<<endl;
}
student& student :: operator =(student &a){
        setfn(a.getfn());
        setln(a.getln());
        setpass(a.getpass());
        setuser(a.getuser());
        roll=a.roll;
        status=a.status;
    }


//-------------------------------------------




instructor :: instructor():lms(){
    dest = "*";
    qual = "*";
    }
instructor :: instructor(string a,string b,string c,string d, string e,string f):lms(a,b,c,d){
    dest = e;
    qual = f;
    }
void instructor :: print(){
    lms :: print();
    cout<<"Designation : "<<dest<<endl;
    cout<<"Qualification : "<<qual<<endl;
    cout<<endl;
}
instructor& instructor :: operator =(instructor &a){
        setfn(a.getfn());
        setln(a.getln());
        setpass(a.getpass());
        setuser(a.getuser());
        dest=a.dest;
        qual=a.qual;
    }
string instructor :: getqual(){
        return qual;
    }
string instructor :: getdest(){
        return dest;
    }
void instructor :: setdest(string a){
        dest=a;
    }
void instructor :: setqual(string a){
        qual=a;
    }



//----------------------------------------------------


course :: course(){
        size=0;
        rsize=0;
        asgsize=0;
        r = new resources[rsize];
        a= new assignment[asgsize];
        m= new marks[size];
        s= new  student[size];
        instructor i1("x","Ali","xx","xxx","xx","xx");
        i=i1;
        cn="**";
        cc="**";
        os="**";
        cap="**";
}
course :: course(int s1){
        size=s1;
        rsize=0;
        asgsize=0;
        m= new marks[size];
        s= new student[size];
        r = new resources[rsize];
        a= new assignment[asgsize];
        instructor i1("x","Ali","xx","xxx","xx","xx");
        i=i1;
        cn="**";
        cc="**";
        os="**";
        cap="**";
}
void course :: addasg(assignment& d){
    assignment *c;
    asgsize++;
    c = new assignment[asgsize];
    for(int i=0;i<asgsize-1;i++){
                  c[i] = a[i];
                }
                c[asgsize-1]=d;
        delete[] a;
    a= new assignment[asgsize];
        for(int i=0;i<asgsize;i++){
                  a[i] = c[i];
                }
    delete[] c;
}
void course :: viewasg(){
    for (int i=0; i<asgsize;i++){
            a[i].printassignment();
    }
}

void course :: addres(resources& d){
resources *c;
    rsize++;
    c = new resources[rsize];
    for(int i=0;i<rsize-1;i++){
                  c[i] = r[i];
                }
                c[rsize-1]=d;
        delete[] r;
    r = new resources[rsize];
        for(int i=0;i<rsize;i++){
                  r[i] = c[i];
                }
    delete[] c;
}
void course :: viewres(){
        for (int i=0; i<rsize;i++){
                r[i].printresource();
        }
    }

void course :: viemarksallstudents(){
        for (int i=0; i<size;i++){
           m[i].printmark();
        }
    }
void course :: viewpmark(int n){
        m[n].printmark();
    }
void course :: setpmarks(int n){
    m[n].setmark();
    }
void course :: setpstudent(student a1,int n){
    s[n-1]= a1;
    }
void course :: viewallstudents(){
        for (int i=0; i<size;i++){
           s[i].print();
        }
    }
void course :: setinstructor(instructor a1){
    i=a1;
    }
void course :: viewinstructor(){
    i.print();
    }
void course :: setcourse( string aa ,string bb ,string cc1 , string dd){
        cn=aa;
        cc=bb;
        os=cc1;
        cap=dd;
    }
void course :: viewcourse(){
        cout<<"Course Name : "<<cn;
        cout<<"| Course Code : "<<cc<<endl;
        cout<<"School Offering : "<<os;
        cout<<"| Capacity : "<<cap<<endl;
        cout<<endl;
    }
void course :: viewsc(){
        cout<<cn<<endl;
    }
string course :: getinstructoruser(){
        return i.getuser();
    }
string course :: getstudentuser(int n){
        return s[n].getuser();
    }
int course :: getcroll(int n){
        return s[n].getroll();
    }
