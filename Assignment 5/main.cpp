#include"lms.cpp"
#include<iostream>
#include<string>
#include<fstream>

using namespace std;


int main(){

lms *lmss[20];
for(int i=0;i<20;i++){
        if(i<15){
            lmss[i]=new student;
        }
        else{
            lmss[i]=new instructor;
        }
}
ifstream u;
u.open("userList.txt");
for(int i=0;i<15;i++){
    int q;
    string q1,q2,q3,q4,q5;
    u>>q;
    u>>q1;
    u>>q2;
    u>>q3;
    u>>q4;
    u>>q5;
    lmss[i]->setroll(q);
    lmss[i]->setstatus(q1);
    lmss[i]->setfn(q2);
    lmss[i]->setln(q3);
    lmss[i]->setuser(q4);
    lmss[i]->setpass(q5);

}
for(int i=15;i<20;i++){
    //int q;
    string q,q1,q2,q3,q4,q5;
    u>>q;
    u>>q1;
    u>>q2;
    u>>q3;
    u>>q4;
    u>>q5;
//    Professor Phd Naveed Arshad naveed@lums.edu.pk cs200Pass
    lmss[i]->setdest(q);
    lmss[i]->setqual(q1);
    lmss[i]->setfn(q2);
    lmss[i]->setln(q3);
    lmss[i]->setuser(q4);
    lmss[i]->setpass(q5);
}
/*
for(int i=0;i<20;i++){
    lmss[i]->print();
    cout<<lmss[i]->getpass()<<endl;
    cout<<lmss[i]->getuser()<<endl;
}
cout<<lmss[1]->getpass()<<endl;
*/
student scourse1[6];
student scourse2[10];
student scourse3[4];
student scourse4[10];
student scourse5[15];

string s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,st;
ifstream in1;
in1.open("Course1.txt");
course course1(6);
in1>>s1;
in1>>s2;
in1>>s3;
in1>>s4;
for(int i=0;i<6;i++){
    int q;
    string q1,q2,q3,q4,q5;
    in1>>q;
    in1>>q1;
    in1>>q2;
    in1>>q3;
    in1>>q4;
    in1>>q5;
    scourse1[i].setroll(q);
    scourse1[i].setstatus(q1);
    scourse1[i].setfn(q2);
    scourse1[i].setln(q3);
    scourse1[i].setuser(q4);
    scourse1[i].setpass(q5);
    course1.setpstudent(scourse1[i],i+1);
}
in1>>s5;//des
in1>>s6;//qual
in1>>s7;//fn
in1>>s8;//ln
in1>>s9;//user
in1>>s10;//pass
instructor i1(s7,s8,s10,s9,s5,s6);
course1.setinstructor(i1);
course1.setcourse(s1, s2 , s3 , s4);

//course1.viewinstructor();
//course1.viewcourse();
//course1.viewallstudents();



ifstream in2;
in2.open("Course2.txt");
course course2(10);
in2>>s1;
in2>>s2;
in2>>s3;
in2>>s4;
for(int i=0;i<10;i++){
    int q;
    string q1,q2,q3,q4,q5;
    in2>>q;
    in2>>q1;
    in2>>q2;
    in2>>q3;
    in2>>q4;
    in2>>q5;
    scourse2[i].setroll(q);
    scourse2[i].setstatus(q1);
    scourse2[i].setfn(q2);
    scourse2[i].setln(q3);
    scourse2[i].setuser(q4);
    scourse2[i].setpass(q5);
    course2.setpstudent(scourse2[i],i+1);
}
in2>>s5;//des
in2>>s6;//qual
in2>>s7;//fn
in2>>s8;//ln
in2>>s9;//user
in2>>s10;
instructor i2(s7,s8,s10,s9,s5,s6);
course2.setinstructor(i2);
course2.setcourse(s1, s2 , s3 , s4);

//course2.viewinstructor();
//course2.viewcourse();
//course2.viewallstudents();


ifstream in3;
in3.open("Course3.txt");
course course3(4);
in3>>s1;
in3>>s2;
in3>>s3;
in3>>s4;
for(int i=0;i<4;i++){
    int q;
    string q1,q2,q3,q4,q5;
    in3>>q;
    in3>>q1;
    in3>>q2;
    in3>>q3;
    in3>>q4;
    in3>>q5;
    scourse3[i].setroll(q);
    scourse3[i].setstatus(q1);
    scourse3[i].setfn(q2);
    scourse3[i].setln(q3);
    scourse3[i].setuser(q4);
    scourse3[i].setpass(q5);
    course3.setpstudent(scourse3[i],i+1);
}
in3>>s5;//des
in3>>s6;//qual
in3>>s7;//fn
in3>>s8;//ln
in3>>s9;//user
in3>>s10;
instructor i3(s7,s8,s10,s9,s5,s6);
course3.setinstructor(i3);
course3.setcourse(s1, s2 , s3 , s4);



ifstream in4;
in4.open("Course4.txt");
course course4(10);
in4>>s1;
in4>>s2;
in4>>s3;
in4>>s4;
for(int i=0;i<10;i++){
    int q;
    string q1,q2,q3,q4,q5;
    in4>>q;
    in4>>q1;
    in4>>q2;
    in4>>q3;
    in4>>q4;
    in4>>q5;
    scourse4[i].setroll(q);
    scourse4[i].setstatus(q1);
    scourse4[i].setfn(q2);
    scourse4[i].setln(q3);
    scourse4[i].setuser(q4);
    scourse4[i].setpass(q5);
    course4.setpstudent(scourse4[i],i+1);
}
in4>>s5;//des
in4>>s6;//qual
in4>>s7;//fn
in4>>s8;//ln
in4>>s9;//user
in4>>s10;
instructor i4(s7,s8,s10,s9,s5,s6);
course4.setinstructor(i4);
course4.setcourse(s1, s2 , s3 , s4);

ifstream in5;
in5.open("Course5.txt");
course course5(15);
in5>>s1;
in5>>s2;
in5>>s3;
in5>>s4;
for(int i=0;i<15;i++){
    int q;
    string q1,q2,q3,q4,q5;
    in5>>q;
    in5>>q1;
    in5>>q2;
    in5>>q3;
    in5>>q4;
    in5>>q5;
    scourse5[i].setroll(q);
    scourse5[i].setstatus(q1);
    scourse5[i].setfn(q2);
    scourse5[i].setln(q3);
    scourse5[i].setuser(q4);
    scourse5[i].setpass(q5);
    course5.setpstudent(scourse5[i],i+1);
}
in5>>s5;//des
in5>>s6;//qual
in5>>s7;//fn
in5>>s8;//ln
in5>>s9;//user
in5>>s10;
instructor i5(s7,s8,s10,s9,s5,s6);
course5.setinstructor(i5);
course5.setcourse(s1, s2 , s3 , s4);

int if1=0;
int if2=0;
string tpass,tuser;
while(if1==0){
cout<<"Enter User Name : ";
cin>>tuser;
for(int i=0;i<20;i++){
    if(tuser == lmss[i]->getuser()){
            if2=0;
            while(if2==0){
            cout<<"Enter Password : ";
            cin>>tpass;
            if(tpass == lmss[i]->getpass()){
                if2=1;

                int asd1=0;
                while(asd1 != -1){
                    if(i>14){
                            int asd;
                            cout<<"Enter 1 to view Roster "<<endl;
                            cout<<"Enter 2 to view Marks of all Students "<<endl;
                            cout<<"Enter 3 to Add Assignment "<<endl;
                            cout<<"Enter 4 to Add Resource "<<endl;
                            cout<<"Enter 5 to view Assignments "<<endl;
                            cout<<"Enter 6 to view Resources "<<endl;
                            cout<<"Enter 7 to SET marks of a particular Student "<<endl;
                            cin>>asd;
                        if(course1.getinstructoruser() == lmss[i]->getuser()){
                            if( asd == 1){
                             course1.viewallstudents();
                             course1.viewinstructor();
                            }
                            else if(asd == 2){
                                course1.viemarksallstudents();
                            }
                            else if(asd == 3){
                                    assignment a9;
                                    a9.setassignment();
                                    course1.addasg(a9);
                            }
                            else if(asd == 4){
                                    resources a8;
                                    a8.setresource();
                                    course1.addres(a8);
                            }
                            else if(asd == 5){
                                course1.viewasg();
                            }
                            else if(asd == 6){
                                course1.viewres();
                            }
                            else if(asd == 7){
                                    int a16;
                                cout<<"Enter Roll Number of Student : ";
                                cin>>a16;
                                for(int i=0;i<6;i++){
                                    if(a16 == course1.getcroll(i)){
                                         course1.setpmarks(i);
                                        break;
                                    }
                                    else if(i == 5){
                                        cout<<"Incorrect Roll Number "<<endl;
                                    }
                                }
                            }
                        }
                        else if(course2.getinstructoruser() == lmss[i]->getuser()){

                            if( asd == 1){
                             course2.viewallstudents();
                             course2.viewinstructor();
                            }
                            else if(asd == 2){
                                course2.viemarksallstudents();
                            }
                            else if(asd == 3){
                                    assignment a9;
                                    a9.setassignment();
                                    course2.addasg(a9);
                            }
                            else if(asd == 4){
                                    resources a8;
                                    a8.setresource();
                                    course2.addres(a8);
                            }
                            else if(asd == 5){
                                course2.viewasg();
                            }
                            else if(asd == 6){
                                course2.viewres();
                            }
                            else if(asd == 7){
                                    int a16;
                                cout<<"Enter Roll Number of Student : ";
                                cin>>a16;
                                for(int i=0;i<10;i++){
                                    if(a16 == course2.getcroll(i)){
                                         course2.setpmarks(i);
                                         break;
                                    }
                                    else if(i== 5){
                                        cout<<"Incorrect Roll Number "<<endl;
                                    }
                                }
                            }
                        }
                        else if(course3.getinstructoruser() == lmss[i]->getuser()){

                            if( asd == 1){
                             course3.viewallstudents();
                             course3.viewinstructor();
                            }
                            else if(asd == 2){
                                course3.viemarksallstudents();
                            }
                            else if(asd == 3){
                                    assignment a9;
                                    a9.setassignment();
                                    course3.addasg(a9);
                            }
                            else if(asd == 4){
                                    resources a8;
                                    a8.setresource();
                                    course3.addres(a8);
                            }
                            else if(asd == 5){
                                course3.viewasg();
                            }
                            else if(asd == 6){
                                course3.viewres();
                            }
                            else if(asd == 7){
                                    int a16;
                                cout<<"Enter Roll Number of Student : ";
                                cin>>a16;
                                for(int i=0;i<4;i++){
                                    if(a16 == course3.getcroll(i)){
                                         course3.setpmarks(i);
                                         break;
                                    }
                                    else if(i== 5){
                                        cout<<"Incorrect Roll Number "<<endl;
                                    }
                                }
                            }
                        }
                        else if(course4.getinstructoruser() == lmss[i]->getuser()){

                            if( asd == 1){
                             course4.viewallstudents();
                             course4.viewinstructor();
                            }
                            else if(asd == 2){
                                course4.viemarksallstudents();
                            }
                            else if(asd == 3){
                                    assignment a9;
                                    a9.setassignment();
                                    course4.addasg(a9);
                            }
                            else if(asd == 4){
                                    resources a8;
                                    a8.setresource();
                                    course4.addres(a8);
                            }
                            else if(asd == 5){
                                course4.viewasg();
                            }
                            else if(asd == 6){
                                course4.viewres();
                            }
                            else if(asd == 7){
                                    int a16;
                                cout<<"Enter Roll Number of Student : ";
                                cin>>a16;
                                for(int i=0;i<10;i++){
                                    if(a16 == course4.getcroll(i)){
                                         course4.setpmarks(i);
                                         break;
                                    }
                                    else if(i== 5){
                                        cout<<"Incorrect Roll Number "<<endl;
                                    }
                                }
                            }
                        }
                        else if(course5.getinstructoruser() == lmss[i]->getuser()){
                         if( asd == 1){
                             course5.viewallstudents();
                             course5.viewinstructor();
                            }
                            else if(asd == 2){
                                course5.viemarksallstudents();
                            }
                            else if(asd == 3){
                                    assignment a9;
                                    a9.setassignment();
                                    course5.addasg(a9);
                            }
                            else if(asd == 4){
                                    resources a8;
                                    a8.setresource();
                                    course5.addres(a8);
                            }
                            else if(asd == 5){
                                course5.viewasg();
                            }
                            else if(asd == 6){
                                course5.viewres();
                            }
                            else if(asd == 7){
                                    int a16;
                                cout<<"Enter Roll Number of Student : ";
                                cin>>a16;
                                for(int i=0;i<15;i++){
                                    if(a16 == course5.getcroll(i)){
                                         course5.setpmarks(i);
                                         break;
                                    }
                                    else if(i== 5){
                                        cout<<"Incorrect Roll Number "<<endl;
                                    }
                                }
                            }
                        }

                    }
                    else if(i<15){
                         int asd;
                         int k2=0,k3=0;
                         int y1=0,y2=0,y3=0,y4=0,y5=0;

                         cout<<"Courses you are enrolled in"<<endl;

                         for(int j=0;j<6;j++){
                            if(lmss[i]->getuser() == course1.getstudentuser(j)){
                                k2++;
                                cout<<"Enter "<<k2<<" to view : ";
                                course1.viewsc();
                            }
                         }

                         for(int j=0;j<10;j++){
                            if(lmss[i]->getuser() == course2.getstudentuser(j)){
                                k2++;
                                cout<<"Enter "<<k2<<" to view : ";
                                course2.viewsc();
                            }
                         }
                         for(int j=0;j<4;j++){
                            if(lmss[i]->getuser() == course3.getstudentuser(j)){
                                k2++;
                                cout<<"Enter "<<k2<<" to view : ";
                                course3.viewsc();
                            }
                         }
                         for(int j=0;j<10;j++){
                            if(lmss[i]->getuser() == course4.getstudentuser(j)){
                                k2++;
                                cout<<"Enter "<<k2<<" to view : ";
                                course4.viewsc();
                            }
                         }
                         for(int j=0;j<15;j++){
                            if(lmss[i]->getuser() == course5.getstudentuser(j)){
                                k2++;
                                cout<<"Enter "<<k2<<" to view : ";
                                course5.viewsc();
                            }

                         }

                        cout<<"Enter number between 1-"<<k2<<" ";
                        cin>>y1;
                         while(y1>k2 || y1<1){
                            cout<<"Enter number between 1-"<<k2<<" ";
                            cin>>y1;
                         }

                         for(int j=0;j<6;j++){
                            if(lmss[i]->getuser() == course1.getstudentuser(j)){
                                k3++;
                                if(y1==k3){
                                    cout<<"Enter 1 to view Roster "<<endl;
                                    cout<<"Enter 2 to view Assignments "<<endl;
                                    cout<<"Enter 3 to view Resources "<<endl;
                                    cout<<"Enter 4 to view marks "<<endl;
                                    cout<<"Enter number between 1-4 ";
                                    cin>>y2;
                                     while(y2>4 || y2<1){
                                        cout<<"Enter number between 1-4 :";
                                        cin>>y2;
                                     }
                                     if(y2==1){
                                        course1.viewallstudents();
                                        course1.viewinstructor();
                                     }
                                     else if(y2==2){
                                        cout<<"Assignments : "<<endl;
                                        cout<<endl;
                                        course1.viewasg();
                                     }
                                     else if(y2==3){
                                            cout<<"Resources : "<<endl;
                                            cout<<endl;
                                            course1.viewres();
                                     }
                                     else if(y2==4){
                                         course1.viewpmark(j);

                                     }
                                }
                            }
                         }

                         for(int j=0;j<10;j++){
                            if(lmss[i]->getuser() == course2.getstudentuser(j)){
                                k3++;
                                if(y1==k3){
                                    cout<<"Enter 1 to view Roster "<<endl;
                                    cout<<"Enter 2 to view Assignments "<<endl;
                                    cout<<"Enter 3 to view Resources "<<endl;
                                    cout<<"Enter 4 to view marks "<<endl;
                                    cout<<"Enter number between 1-4 ";
                                    cin>>y2;
                                     while(y2>4 || y2<1){
                                        cout<<"Enter number between 1-4 :";
                                        cin>>y2;
                                     }
                                     if(y2==1){
                                        course2.viewallstudents();
                                        course2.viewinstructor();
                                     }
                                     else if(y2==2){
                                        cout<<"Assignments : "<<endl;
                                        cout<<endl;
                                        course2.viewasg();
                                     }
                                     else if(y2==3){
                                        cout<<"Resources : "<<endl;
                                        cout<<endl;
                                            course2.viewres();
                                     }
                                     else if(y2==4){
                                         course2.viewpmark(j);

                                     }
                                }
                           }
                         }
                         for(int j=0;j<4;j++){
                            if(lmss[i]->getuser() == course3.getstudentuser(j)){
                                k3++;
                                if(y1==k3){
                                    cout<<"Enter 1 to view Roster "<<endl;
                                    cout<<"Enter 2 to view Assignments "<<endl;
                                    cout<<"Enter 3 to view Resources "<<endl;
                                    cout<<"Enter 4 to view marks "<<endl;
                                    cout<<"Enter number between 1-4 ";
                                    cin>>y2;
                                     while(y2>4 || y2<1){
                                        cout<<"Enter number between 1-4 :";
                                        cin>>y2;
                                     }
                                     if(y2==1){
                                        course3.viewallstudents();
                                        course3.viewinstructor();
                                     }
                                     else if(y2==2){
                                        cout<<"Assignments : "<<endl;
                                        cout<<endl;
                                        course3.viewasg();
                                     }
                                     else if(y2==3){
                                            cout<<"Resources : "<<endl;
                                            cout<<endl;
                                            course3.viewres();
                                     }
                                     else if(y2==4){
                                         course3.viewpmark(j);
                                     }
                                }
                             }
                         }
                         for(int j=0;j<10;j++){
                            if(lmss[i]->getuser() == course4.getstudentuser(j)){
                                k3++;
                                if(y1==k3){
                                    cout<<"Enter 1 to view Roster "<<endl;
                                    cout<<"Enter 2 to view Assignments "<<endl;
                                    cout<<"Enter 3 to view Resources "<<endl;
                                    cout<<"Enter 4 to view marks "<<endl;
                                    cout<<"Enter number between 1-4 ";
                                    cin>>y2;
                                     while(y2>4 || y2<1){
                                        cout<<"Enter number between 1-4 :";
                                        cin>>y2;
                                     }
                                     if(y2==1){
                                        course4.viewallstudents();
                                        course4.viewinstructor();
                                     }
                                     else if(y2==2){
                                        cout<<"Assignments : "<<endl;
                                        cout<<endl;
                                        course4.viewasg();
                                     }
                                     else if(y2==3){
                                            cout<<"Resources : "<<endl;
                                            cout<<endl;
                                            course4.viewres();
                                     }
                                     else if(y2==4){
                                         course4.viewpmark(j);
                                     }

                                }
                              }
                         }
                         for(int j=0;j<15;j++){
                            if(lmss[i]->getuser() == course5.getstudentuser(j)){
                                k3++;
                                if(y1==k3){
                                        cout<<"Enter 1 to view Roster "<<endl;
                                    cout<<"Enter 2 to view Assignments "<<endl;
                                    cout<<"Enter 3 to view Resources "<<endl;
                                    cout<<"Enter 4 to view marks "<<endl;
                                    cout<<"Enter number between 1-4 ";
                                    cin>>y2;
                                     while(y2>4 || y2<1){
                                        cout<<"Enter number between 1-4 :";
                                        cin>>y2;
                                     }
                                     if(y2==1){
                                        course5.viewallstudents();
                                        course5.viewinstructor();
                                     }
                                     else if(y2==2){
                                        cout<<"Assignments : "<<endl;
                                        cout<<endl;
                                        course5.viewasg();
                                     }
                                     else if(y2==3){
                                            cout<<"Resources : "<<endl;
                                            cout<<endl;
                                            course5.viewres();
                                     }
                                     else if(y2==4){
                                         course5.viewpmark(j);
                                     }

                                }
                               }
                         }
                    }

                    cout<<"enter -1 to Log-OUT or any other number to continue...";
                    cin>>asd1;
                }
            }
            else if (if2 !=1){
                cout<<"Incorrect Password "<<endl;
                cout<<"Enter 0 (zero to try again) or an other key to exit ";
                cin>>if2;
            }
        }
    break;
    }
        else if(i ==19){
        cout<<"Incorrect User Name "<<endl;
        }

}

        cout<<"Enter 0 to Login...or an other key to exit ";
        cin>>if1;
}

return 0;
}
