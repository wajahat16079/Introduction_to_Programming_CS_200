//#include"lms.cpp"
#include<iostream>
#include<string>
using namespace std;

class assignment{
private:
    string asg;
    string date;
public:
    assignment();
    assignment(string a, string b);
    assignment& operator =(assignment &a);
    void setassignment();
    void printassignment();
};
class resources{
private:
    string res;
public:
    resources();
    resources(string a);
    resources& operator =(resources &a);
    void setresource();
    void printresource();
};
class marks{
private:
    double m;
public:
    marks();
    marks(double a);
    marks& operator =(marks &a);
    void setmark();
    void printmark();
};

class lms{
    protected:
        string fn;
        string ln;
        string pass;
        string user;
    public:

        lms();
        lms(string a,string b,string c,string d);
        void print();
        virtual string getfn();
        virtual string getln();
        virtual string getpass();
        virtual string getuser();

        virtual void setfn(string a);
        virtual void setln(string a);
        virtual void setpass(string a);
        virtual void setuser(string a);

        virtual void setroll(int a){};
        virtual void setstatus(string a){};
        virtual int getroll(){};
        virtual string getstatus(){};

       virtual void setqual(string a){};
       virtual void setdest(string a){};
       virtual string getqual(){};
       virtual string getdest(){};


};

class student: public lms{
private:
    int roll;
    string status;
public:
    student();
    student(string a,string b,string c,string d, string e,int f);
    void setroll(int a);
    void setstatus(string a);
    int getroll();
    string getstatus();
    void print();
    student& operator =(student &a);
};

class instructor : public lms{
private:
    string dest;
    string qual;
public:
    instructor();
    instructor(string a,string b,string c,string d, string e,string f);
    void print();
    instructor& operator =(instructor &a);
    string getqual();
    string getdest();
    void setdest(string a);
    void setqual(string a);
};

class course {
private:
    string cn;
    string cc;
    string os;
    string cap;
    int size;
    int rsize;
    int asgsize;
    resources *r;
    assignment *a;
    marks *m;
    student *s;
    instructor i;
public :
    course();
    course(int s1);
    void addasg(assignment& d);
    void viewasg();
    void addres(resources& d);
    void viewres();
    void viemarksallstudents();
    void viewpmark(int n);
    void setpmarks(int n);
    void setpstudent(student a1,int n);
    void viewallstudents();
    void setinstructor(instructor a1);
    void viewinstructor();
    void setcourse( string aa ,string bb ,string cc1 , string dd);
    void viewcourse();
    void viewsc();
    string getinstructoruser();
    string getstudentuser(int n);
    int getcroll(int n);
};
