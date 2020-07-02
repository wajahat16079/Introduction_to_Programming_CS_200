//task 2
#include<iostream>
#include<string>
using namespace std;

void printsp(string seatplan[4][8])
{
    cout<<"\t\t\t*** LAB 3 ***"<<endl;
    cout<<endl;
    cout<<"\t1\t2\t3\t4\t5\t6\t7\t8"<<endl;
    cout<<endl;
    for(int i = 0;i<4;i++)
    {
        cout<<i+1<<"\t";
        for(int j = 0;j<8;j++)
        {
            cout<<seatplan[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"\t\t*= Free Computer; o= Occupied Computer"<<endl;
    cout<<endl;
}


void printcn(int cnum[4][8])
{
    cout<<"\t\tNumbering Scheme of Computers in Lab 3"<<endl;
    cout<<endl;
    cout<<"\t1\t2\t3\t4\t5\t6\t7\t8"<<endl;
    cout<<endl;
    for(int i = 0;i<4;i++)
    {
        cout<<i+1<<"\t";
        for(int j = 0;j<8;j++)
        {
            cout<<cnum[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    
}
void f1(int rollnum[10],string password[10],string lstatus[10],string seatplan[4][8],int cnum[4][8],int srow[10],int scol[10])
{
    
      
    int lrollnum=0;
    string lpassword;
    cout<<"Enter your Roll Number :";
    cin>>lrollnum;
    cout<<"Enter your Password :";
    cin>>lpassword;
    
    for(int x1=0;x1<11;x1++)
    {
        if(x1==10)
        {
            cout<<"Roll Number or Password incorrect ....please try again"<<endl;
            cout<<endl;
        }
        else if(x1<10)
        {
            if(lrollnum==rollnum[x1] && lpassword==password[x1] && lstatus[x1]=="0")
            {
                cout<<"Enter  Column Number :";
                cin>>scol[x1];
                while(scol[x1]>8 || scol[x1]<1)
                {
                    cout<<"Invalid input enter value between 1-8 :"<<endl;
                    cout<<"Enter  Column Number :";
                    cin>>scol[x1];
                }
                cout<<"Enter your Row Number :";
                cin>>srow[x1];
                while(srow[x1]>4 || srow[x1]<1)
                {
                    cout<<"Invalid input enter value between 1-4 :"<<endl;
                    cout<<"Enter  Row Number :";
                    cin>>srow[x1];
                }   
                if(seatplan[srow[x1]-1][scol[x1]-1]=="*")
                {
                    lstatus[x1]="1";
                    cout<<"You have been logged in to computer # "<<cnum[srow[x1]-1][scol[x1]-1]<<" successfully!"<<endl;
                    seatplan[srow[x1]-1][scol[x1]-1]="o";
                    cout<<endl;
                }
                else if(seatplan[srow[x1]-1][scol[x1]-1]=="o")
                {
                    cout<<"computer already occupied  "<<endl;
                    cout<<endl;
                }
                   
                break;
            }
            else if(lrollnum==rollnum[x1] && lpassword==password[x1] && lstatus[x1]=="1")
                {
                    cout<<" USER already logged in "<<endl;
                    cout<<endl;
                }
                break;
        }
    }
}
void f2(int rollnum[10],string lstatus[10],string seatplan[4][8],int srow[10],int scol[10])
{
    int lorollnum=0;
    cout<<"Enter your Roll Number :";
    cin>>lorollnum;
    for(int x3=0;x3<11;x3++)
    {
        if(x3==10)
        {
        cout<<"Roll Number incorrect ....please try again"<<endl;
        cout<<endl;
        }
        else if(x3<10)
        {
            if(lorollnum==rollnum[x3] && lstatus[x3]=="1")
            {
            lstatus[x3]="0";
            cout<<"You have been logged out of computer... successfully!"<<endl;
            seatplan[srow[x3]-1][scol[x3]-1]="*";
            cout<<endl;
            break;        
            }
            else if(lorollnum==rollnum[x3] && lstatus[x3]=="0")
            {
                cout<<"user already logged out of computer..."<<endl;
                break;
            }
        }
    }    
   
}

void f3(int rollnum[10],string lstatus[10],string pchange[10])
{
    int pcrollnum=0;;
    cout<<"Enter your Roll Number :";
    cin>>pcrollnum;
        for(int y3=0;y3<11;y3++)
        {
            if(y3==10)
            {
                cout<<"Roll Number incorrect ...."<<endl;
                cout<<endl;
            }
            else if(y3<10)
            {
                if(pcrollnum==rollnum[y3] && lstatus[y3]=="0" && pchange[y3]=="0")
                {
                    pchange[y3]="1";
                    cout<<"Password change request sent to admin....successfully..."<<endl;
                    cout<<endl;
                    break;
                }
                else if(pcrollnum==rollnum[y3] && pchange[y3]=="0"&& lstatus[y3]=="1")
                {
                    cout<<"please try after logging out of system...."<<endl;
                    cout<<endl;
                    break;
                }
                else if (pcrollnum==rollnum[y3] && pchange[y3]=="1"&& lstatus[y3]=="0")
                {
                    cout<<"you have pending password change request..."<<endl;                    
                    cout<<endl;
                    break;
                }
             }
        }
}
void f4(int rollnum[10], string message[10])
{
    int mrollnum;
    cout<<"Enter your Roll Number :";
    cin>>mrollnum;
    for(int x13=0;x13<11;x13++)
    {
        if(x13==10)
        {
            cout<<"Roll Number or Password incorrect ....please try again"<<endl;
            cout<<endl;
        }
        else if(x13<10)
        {
             if(mrollnum==rollnum[x13])
            {
                cout<<message[x13]<<endl;
                message[x13]="***(can view message only once)***";
                cout<<endl;
                break;
            }
        }   
    }
   
}
void z2(int rollnum[10],string lstatus[10],int cnum[4][8],int srow[10],int scol[10])
{
    cout<<"Following Students are logged in...."<<endl;
    for(int y4=0;y4<11;y4++)
    {
        if(lstatus[y4]=="1")
        {
            cout<<rollnum[y4]<<" : Computer #"<<cnum[srow[y4]-1][scol[y4]-1]<<"; Row # "<<srow[y4]<<" ; Column # "<<scol[y4]<<endl;
            cout<<endl;        
        }
    }
   
}
void z3(int rollnum[10],string pchange[10])
{
    cout<<"Following students have requested for password change "<<endl;
    cout<<endl;
    for(int y55=0;y55<11;y55++)
    {
        if(pchange[y55]=="1")
        {
            cout<<rollnum[y55]<<" has requested for password change "<<endl;
            cout<<endl;
        }
    }
}
void z4(int rollnum[10],string pchange[10],string password[10],string message[10])
{
    cout<<"Following students have requested for password change "<<endl;
    cout<<endl;
    for(int y5=0;y5<11;y5++)
    {
        if(pchange[y5]=="1")
        {
            cout<<rollnum[y5]<<" has requested for password change "<<endl;
            cout<<"Enter new password  : ";
            cin>>password[y5];        
            message[y5]="Your new password is : " +password[y5];
            pchange[y5]="0";
        }
    }
}
int main()
{
    int k=1;
    int z=0;
    int z6=0;
    int scol[10];
    int srow[10];
    string lstatus[10];
    string message[10];
    string password[10];
    int rollnum[10];
    string seatplan[4][8];
    string lpassword;
    string mpassword;
    int cnum[4][8];
    string pchange[10];
    
    
    
    string rllnum[10];
    rllnum[0]="19100001";
    rllnum[1]="19100002";
    rllnum[2]="19100003";
    rllnum[3]="19100004";
    rllnum[4]="19100005";
    rllnum[5]="19100006";
    rllnum[6]="19100007";
    rllnum[7]="19100008";
    rllnum[8]="19100009";
    rllnum[9]="19100010";

for(int x4 = 0;x4<10;x4++)
{
    lstatus[x4]="0";    
} 
    
for(int x44 = 0;x44<10;x44++)
{
    message[x44]="Dear "+ rllnum[x44]+ ",Thank you for contacting IST Helpdesk.It is our top priority to resolve your issue in the most timely manner.";    
} 
   
       
for(int xx = 0;xx<10;xx++)
{
    pchange[xx]="0";    
} 
    
for(int x = 0;x<4;x++)
{
    for(int y = 0;y<8;y++)
    {
        cnum[x][y]=k;
        k=k+1;
    }
        
} 
    
for(int i = 0;i<4;i++)
{
    for(int j = 0;j<8;j++)
    {
        seatplan[i][j]="*";
    }
        
}
    cout<<"**** **** Student Mode **** ****"<<endl;
    password[0]="abc123";
    password[1]="abc456";
    password[2]="abc789";
    password[3]="def123";
    password[4]="def456";
    password[5]="def789";
    password[6]="xyz123";
    password[7]="xyz456";
    password[8]="xyz789";
    password[9]="xyz123";
    
    rollnum[0]=19100001;
    rollnum[1]=19100002;
    rollnum[2]=19100003;
    rollnum[3]=19100004;
    rollnum[4]=19100005;
    rollnum[5]=19100006;
    rollnum[6]=19100007;
    rollnum[7]=19100008;
    rollnum[8]=19100009;
    rollnum[9]=19100010;

while(z!=-1)
{
    cout<<"- Press 1 to log in to a computer"<<endl;
    cout<<"- Press 2 to log off from a computer"<<endl;
    cout<<"- Press 3 to request for password reset"<<endl;
    cout<<"- Press 4 to view message from Helpdesk"<<endl;
    cout<<"- Press 5 to view Lab seating arrangement"<<endl;
    cout<<"- Press 6 to switch mode"<<endl;
    cout<<"- Press -1 to exit"<<endl;
    cout<<"- Enter Number    : ";
    cin>>z;
    
    while(z<-1 || z>6 || z==0 )
    {
        cout<<"-Enter Number between 1-6 or -1 to exit    : ";
        cin>>z;
    }
    cout<<endl;
        
if(z==1)
{
    f1(rollnum,password,lstatus,seatplan,cnum,srow,scol);   
}
    
else if(z==2)
{
    f2(rollnum,lstatus,seatplan,srow,scol) ;
}
else if(z==3)
{
    f3(rollnum,lstatus,pchange);  
}
else if(z==4)
{
    f4(rollnum, message);
}
else if(z==5)
{
        printsp(seatplan);    
}
else if(z==6)
{
    cout<<"**** **** Admin Mode **** ****"<<endl;
    while (z6!=-1)
    {
        cout<<"- Press 1 to View Lab 3 Seating Plan"<<endl;
        cout<<"- Press 2 to Trace a Student"<<endl;
        cout<<"- Press 3 to View change password requests"<<endl;
        cout<<"- Press 4 Change password of a student"<<endl;
        cout<<"- Press -1 to exit"<<endl;
        cout<<"Enter Number : ";
        cin>>z6;
        while(z<-1 || z>4 || z==0 )
        {
            cout<<"-Enter Number between 1-4 or -1 to exit    : ";
            cin>>z;
        }
        if(z6==1)
        {
            printsp( seatplan); 
        }
        
        else if(z6==2)
        {
            z2(rollnum,lstatus,cnum,srow, scol);
        }
        else if(z6==3)
        {
            z3(rollnum,pchange);  
        }
        else if(z6==4)
        {
            z4(rollnum,pchange,password,message);
        }
     }

 cout<<"**** **** Student Mode **** ****"<<endl;
 z6=0;
}
}
return 0;
}








