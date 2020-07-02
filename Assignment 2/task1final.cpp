//task 1
#include<iostream>
#include<string>
using namespace std;
void printe(string economy[7][4])
{
    cout<<"Current Economy Seating Plan"<<endl;
    cout<<endl;
    cout<<"\tC 1\tC 2\tC 3\tC 4"<<endl;
    for(int i = 0;i<7;i++)
    {
        cout<<"Row "<<i+1+3<<"\t";
        for(int j = 0;j<4;j++)
        {
            cout<<economy[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"\t*= Available Seat; o= Reserved Seat"<<endl;
    cout<<endl;
}
void printb(string business[3][4])
{
    cout<<endl;
    cout<<"Current Business Seating Plan"<<endl;
    cout<<"\tC 1\tC 2\tC 3\tC 4"<<endl;
    for(int i = 0;i<3;i++)
    {
        cout<<"Row"<<i+1<<"\t";
        for(int j = 0;j<4;j++)
        {
            cout<<business[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"\t*= Available Seat; o= Reserved Seat"<<endl;
    cout<<endl;
}

void f1(string name[100],string chose[100],int& count,int rollnum[100],int row[100],int col[100],string economy[7][4],string business[3][4] )
{
        cout<<"Enter B for Business class or E for economy class :";
        cin>>chose[count];
        cout<<endl;
        cout<<"Please Enter Your Name : ";
        cin>>name[count];
        for(int x1=0;x1<count;x1++)
        {
            while(name[x1]==name[count])
            {
                cout<<"seat already reserved against this name. try different name: ";
                cin>>name[count];        
                cout<<endl;
            }
        }
        cout<<endl;
        cout<<"Please Enter Your Roll Number:";
        cin>>rollnum[count];
        for(int y1=0;y1<count;y1++)
        {
            while(rollnum[y1]==rollnum[count])
            {
                cout<<"seat already reserved against this rollnum. try different roll num: ";
                cin>>rollnum[count];        
                cout<<endl;
            }
        }
        cout<<endl;
        if(chose[count] == "b"||chose[count] == "B")
        {
            printb(business);
            cout<<"Please Enter Row Number :Row ";
            cin>>row[count];
            cout<<endl;
            while(row[count]>3 || row[count]<1)
                {
                    cout<<"Invalid input enter value between 1-3 :"<<endl;
                    cout<<"Enter  Row Number :Row ";
                    cin>>row[count];
                }
            cout<<"Please Enter Column Number :C ";
            cin>>col[count];
            while(col[count]>4 || col[count]<1)
                {
                    cout<<"Invalid input enter value between 1-4 :"<<endl;
                    cout<<"Enter  Row Number :C ";
                    cin>>col[count];
                }
            cout<<endl;
           if(business[row[count]-1][col[count]-1]=="*")
           {
                business[row[count]-1][col[count]-1]="o";
                cout<<"Dear "<<name[count]<<", Seat number "<<"Row :"<<row[count]<<" Column :"<<col[count]<<" has successfully been reserved for you."<<endl;
                cout<<endl;
                printb(business);
           }
           else
           {
                cout<<"Dear "<<name[count]<<", Seat number "<<"Row :"<<row[count]<<" Column :"<<col[count]<<" is already reserved"<<endl;
                count=count-1;
                cout<<endl;
           }
        }
        else if(chose[count] == "e"||chose[count] == "E")
        {
            
            printe(economy);
            
            cout<<"Please Enter Row Number :";
            cin>>row[count];
            cout<<endl;
            while(row[count]>10 || row[count]<4)
                {
                    cout<<"Invalid input enter value between 4-10 :"<<endl;
                    cout<<"Enter  Row Number :Row ";
                    cin>>row[count];
                }
            
            cout<<"Please Enter Column Number :";
            cin>>col[count];
            while(col[count]>4 || col[count]<1)
                {
                    cout<<"Invalid input enter value between 1-4 :"<<endl;
                    cout<<"Enter  Row Number :C ";
                    cin>>col[count];
                }
            cout<<endl;
            if(economy[row[count]-1-3][col[count]-1]=="*")
           {
                economy[row[count]-1-3][col[count]-1]="o";
                cout<<"Dear "<<name[count]<<", Seat number "<<"Row :"<<row[count]<<" Column :"<<col[count]<<" has successfully been reserved for you."<<endl;
                cout<<endl;
                printe(economy);
           }
           else if(economy[row[count]-1-3][col[count]-1]=="o")
           {
                cout<<"Dear "<<name[count]<<", Seat number "<<"Row :"<<row[count]<<" Column :"<<col[count]<<" is already reserved"<<endl;
                count=count-1;
                cout<<endl;
           }
        }
}


void f2(string name[100],string chose[100],int count,int rollnum[100],int row[100],int col[100],string economy[7][4],string business[3][4] )
{
        int rollnumc=0;
        string namec;
        cout<<"Enter your name  : ";
        cin>>namec;
        cout<<"Enter your roll  : ";
        cin>>rollnumc;
        for(int p=0;p<count+1;p++)
        {
            if(p==count)
            {
                cout<<"NO seat was reserved against this roll num and name"<<endl;
            }
            else if(p<count)
            {
            if(rollnumc==rollnum[p] && namec==name[p])
            {
                if (chose[p]=="e"||chose[p]=="E")
                {
                    economy[row[p]-1-3][col[p]-1]="*";    
                    cout<<"your seat reservation has been cancelled"<<endl;
                    cout<<endl;
                }
                else if(chose[p]=="b"||chose[p]=="B")
                {
                    business[row[p]-1][col[p]-1]="*";
                    cout<<"your seat reservation has been cancelled"<<endl;
                    cout<<endl;
                }
                rollnum[p]=-1; 
                name[p]="***";
                row[p-3]=0;
                col[p]=0;
                chose[p]=="error";
             break;               
            }
            
            }
        }
}

void f3(string name[100],string chose[100],int count,int rollnum[100],int row[100],int col[100],string economy[7][4],string business[3][4] )       
 {
            int rollnumch=0;
            string namech;
            int rowch =0;
            int colch=0;
        
        
        cout<<"Enter your name  : ";
        cin>>namech;
        cout<<"Enter your roll  : ";
        cin>>rollnumch;
        cout<<"Enter your seat's row num  : ";
        cin>>rowch;
        cout<<"Enter your seat's column num : ";
        cin>>colch;
        
        for(int p1=0;p1<count+1;p1++)
        {
            if(p1==count)
            {
                cout<<"NO seat was reserved against this roll num and name"<<endl;
            }
            else if(p1<count)
            {
            if(rollnumch==rollnum[p1] && namech ==name[p1])
            {
                if (chose[p1]=="e" || chose[p1] == "E")
                {
                    cout<<"Enter B for Business class or E for economy class :";
                    cin>>chose[p1];
                    cout<<endl;
                    economy[row[p1]-3-1][col[p1]-1]="*";
                    
                    if(chose[p1] == "b"||chose[p1] == "B")
                    {
                        printb(business);
                        cout<<"Please Enter Row Number :";
                        cin>>row[p1];
                        while(row[p1]>3 || row[p1]<1)
                        {
                            cout<<"Invalid input enter value between 1-3 :"<<endl;
                            cout<<"Enter  Row Number :Row ";
                            cin>>row[p1];
                        }
                        cout<<endl;
                        cout<<"Please Enter Column Number :";
                        cin>>col[p1];
                        cout<<endl;
                        while(col[p1]>4 || col[p1]<1)
                        {
                            cout<<"Invalid input enter value between 1-4 :"<<endl;
                            cout<<"Enter  Row Number :C ";
                            cin>>col[p1];
                            cout<<endl;
                        }
                        if(business[row[p1]-1][col[p1]-1]=="*")
                        {
                            business[row[p1]-1][col[p1]-1]="o";
                            cout<<"Dear "<<name[p1]<<", Seat number "<<"Row :"<<row[p1]<<" Column :"<<col[p1]<<" has successfully been reserved for you."<<endl;
                            cout<<endl;
                            printb(business);
                        }
                        else if(business[row[p1]-1][col[p1]-1]=="o")
                        {
                            cout<<"Dear "<<name[p1]<<", Seat number "<<"Row :"<<row[p1]<<" Column :"<<col[p1]<<" is already reserved"<<endl;
                            cout<<endl;
                        }
                    }
                    else if(chose[p1] == "e"||chose[p1]=="E")
                    {
                        printe(economy);
                        cout<<"Please Enter Row Number :";
                        cin>>row[p1];
                        while(row[p1]>10 || row[p1]<4)
                        {
                            cout<<"Invalid input enter value between 4-10 :"<<endl;
                            cout<<"Enter  Row Number :Row ";
                            cin>>row[p1];
                        }
                        cout<<endl;
                        cout<<"Please Enter Column Number :";
                        cin>>col[p1];
                        while(col[p1]>4 || col[p1]<1)
                        {
                            cout<<"Invalid input enter value between 1-4 :"<<endl;
                            cout<<"Enter  Row Number :C ";
                            cin>>col[p1];
                        }
                        cout<<endl;
                        
                        if(economy[row[p1]-1-3][col[p1]-1]=="*")
                        {
                            economy[row[p1]-1-3][col[p1]-1]="o";
                            cout<<"Dear "<<name[p1]<<", Seat number "<<"Row :"<<row[p1]<<" Column :"<<col[p1]<<" has successfully been reserved for you."<<endl;
                            cout<<endl;
                            printe(economy);
                        }
                        else if(economy[row[p1]-1-3][col[p1]-1]=="o")
                        {
                            cout<<"Dear "<<name[p1]<<", Seat number "<<"Row :"<<row[p1]<<" Column :"<<col[p1]<<" is already reserved"<<endl;
                            cout<<endl;
                        }
                    }
                
                }
                
            else if(chose[p1]=="b"||chose[p1]=="B")
                    {
                        business[row[p1]-1][col[p1]-1]="*";
                        printb(business);
                        cout<<"Please Enter Row Number :";
                        cin>>row[p1];
                        cout<<endl;
                        while(row[p1]>3 || row[p1]<1)
                        {
                            cout<<"Invalid input enter value between 1-3 :"<<endl;
                            cout<<"Enter  Row Number :Row ";
                            cin>>row[p1];
                        }
            
                        cout<<"Please Enter Column Number :";
                        cin>>col[p1];
                        cout<<endl;
                        while(col[p1]>4 || col[p1]<1)
                        {
                            cout<<"Invalid input enter value between 1-4 :"<<endl;
                            cout<<"Enter  Row Number :C ";
                            cin>>col[p1];
                            cout<<endl;
                        }
                        if(business[row[p1]-1][col[p1]-1]=="*")
                        {
                        business[row[p1]-1][col[p1]-1]="o";
                        cout<<"Dear "<<name[p1]<<", Seat number "<<"Row :"<<row[p1]<<" Column :"<<col[p1]<<" has successfully been reserved for you."<<endl;
                        cout<<endl;
                        printb(business);
                        }
                        else if(business[row[p1]-1][col[p1]-1]=="o")
                        {
                            cout<<"Dear "<<name[p1]<<", Seat number "<<"Row :"<<row[p1]<<" Column :"<<col[p1]<<" is already reserved"<<endl;
                            cout<<endl;
                        }
                    }
                   
                
                break;
                }
            
    
            
            }
        }
}
void f5(string name[100],string chose[100],int count,int rollnum[100],int row[100],int col[100],string economy[7][4],string business[3][4] )
{
     
    string name5;
    int rollnum5=0;
        cout<<"Enter your name  : ";
        cin>>name5;
        cout<<"Enter your roll  : ";
        cin>>rollnum5;
      
        
        for(int p2=0;p2<count+1;p2++)
        {
            if(p2== count)
            {
            cout<<"NO seat was reserved against this roll number and name"<<endl;
            }
            else if(p2<count)
            {
                 if(rollnum5==rollnum[p2] && name5 ==name[p2])
                {
                    if(chose[p2]=="e"||chose[p2]=="E")
                {
                    cout<<"your seat is: Economy ,row :"<<row[p2]<<"; column :"<<col[p2]<<endl;  
                }
                    else if(chose[p2]=="b"||chose[p2]=="B")
                {
                    cout<<"your seat is: Business ,row :"<<row[p2]<<"; column :"<<col[p2]<<endl;  
                }
                break;
                }
                
            }
        }
        
        

}

void f4(string economy[7][4],string business[3][4] )
{

    cout<<"\tCurrent Seating Plan"<<endl;
    cout<<"\tC 1\tC 2\tC 3\tC 4"<<endl;
    for(int i = 0;i<3;i++)
    {
        cout<<"Row"<<i+1<<"\t";
        for(int j = 0;j<4;j++)
        {
            cout<<business[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    
    for(int i = 0;i<7;i++)
    {
        cout<<"Row "<<i+1+3<<"\t";
        for(int j = 0;j<4;j++)
        {
            cout<<economy[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"\t*= Available Seat; o= Reserved Seat"<<endl;
    cout<<endl;
}






int main()
{
    string business[3][4];
    string economy[7][4];
    string chose[100];
    string name[100];
    int rollnum[100];
    int z=0;
    int row[100];
    int col[100];
    int count=0;
    string namec;
    string namech;
  int k=0;
    int k1=0;
    for(int i = 0;i<7;i++)
    {
        for(int j = 0;j<4;j++)
        {
            economy[i][j]="*";
        }
        
    }
    for(int x = 0;x<3;x++)
    {
        for(int y = 0;y<4;y++)
        {
            business[x][y]="*";
        }
        
    }
    
    
cout<<"**** Welcome to Reservation System ****"<<endl;
    
while(z!=-1)
{
         for(int i1 = 0;i1<7;i1++)
        {
            for(int j1 = 0;j1<4;j1++)
            {
            if(economy[i1][j1]=="*")
            {
                k1=k1+1;
            }
            }
        
        }
        for(int x2 = 0;x2<3;x2++)
        {
            for(int y2 = 0;y2<4;y2++)
            {
            if(business[x2][y2]=="*")
            {
                k=k+1;
            }
            }
        
        }
        if(k==0 && k1==0)
        {
        cout<<"Next flight will leave tomorrow"<<endl;
        cout<<endl;
        }
    
    cout<<"-Press 1 to reserve a seat"<<endl;
    cout<<"-Press 2 to cancel your seat"<<endl;
    cout<<"-Press 3 to change your seat"<<endl;
    cout<<"-Press 4 to View Seating Plan"<<endl;
    cout<<"-Press 5 to Seek Help"<<endl;
    cout<<"-Press -1 to exit"<<endl;
    cout<<"-Enter Number    : ";

    cin>>z;
    while(z<-1 || z>5 || z==0 )
    {
        cout<<"-Enter Number between 1-5 or -1 to exit    : ";
        cin>>z;
    }
    cout<<endl;
    if(z==1)
    {
        f1( name, chose, count, rollnum, row, col,economy, business);
    }
    else if(z==2)
    {
        f2( name, chose, count, rollnum, row, col,economy, business);
    }
    else if(z==3)
    {
        f3( name, chose, count, rollnum, row, col,economy, business);
    }
    else if(z==4)
    {
         f4(economy,business );
    }
    else if(z==5)
    {
       f5(name,chose, count, rollnum, row, col,economy, business );
    }
    
count=count+1;
}
return 0;
}



