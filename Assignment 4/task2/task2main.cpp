using namespace std;
//#include"headers.h"
#include"headers.cpp"
#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>     /* srand, rand */
#include <time.h>


int main(){

srand (time(NULL));
int k=0;
int v1=0;
string a,a1;
string b,b1;
char s,s1;
int z=0;
while(1){
    k=0;
    z=0;
v1 = rand() % 2;
 if(v1==0){
while(1){
		cout<<"Enter game size : "<<endl;
		cout<<"Enter 3 for 3x3"<<endl;
        cout<<"Enter 5 for 5x5"<<endl;
        cout<<"Enter 7 for 7x7"<<endl;
        cout<<"Enter 9 for 9x9"<<endl;
    	cin>>z;
		if(z!=3 && z!=5 && z!=7 && z!=9){
			cout<<"Error! Enter 3 ,5 ,7 or 9 "<<endl;
		}
		else{
			break;
		}
	}

cout<<"player 1 enter your f name : ";
cin>>a;
cout<<"player 1 enter your l name : ";
cin>>a1;
cout<<"player 1 symb : ";
cin>>s;
while(1){
    if(s == '*'){
        cout<<"Error!!! player 1 symb : ";
        cin>>s;
    }
    else{
        break;
    }
}
cout<<"player 2 enter your f name : ";
cin>>b;
cout<<"player 2 enter your l name : ";
cin>>b1;
cout<<"player 2 symb : ";
cin>>s1;
while(1){
    if(s1 == '*' || s1 == s){
        cout<<" Error!!! player 2 symb : ";
        cin>>s1;
    }
    else{
        break;
    }
}



player p111(a,a1,s);
player p222(b,b1,s1);
game aa(p111,p222,z);
aa.printarr();
while (1){
        cout<<" Your turn Player 1 : ";
        aa.printnamep1();
        aa.setboard(aa.getplayer1symbol());
        if(aa.check(aa.getplayer1symbol())){
            k++;
            cout<<"P1 wins"<<endl;
            cout<<endl;
            break;
        }
        if(aa.checktie()){
             break;
        }
        cout<<" Your turn Player 2 : ";
        aa.printnamep2();
        aa.setboard(aa.getplayer2symbol());
        if(aa.check(aa.getplayer2symbol())){
            k++;
            cout<<"P2 wins"<<endl;
            cout<<endl;
            break;
        }
    }
    if(k==0){
    cout<<"game tied"<<endl;
    }

}
else if(v1==1){
while(1){
		cout<<"Enter game size : "<<endl;
		cout<<"Enter 3 for 3x3"<<endl;
        cout<<"Enter 5 for 5x5"<<endl;
        cout<<"Enter 7 for 7x7"<<endl;
        cout<<"Enter 9 for 9x9"<<endl;
    	cin>>z;
		if(z!=3 && z!=5 && z!=7 && z!=9){
			cout<<"Error! Enter 3 ,5 ,7 or 9 "<<endl;
		}
		else{
			break;
		}
	}

cout<<"player 1 enter your f name : ";
cin>>a;
cout<<"player 1 enter your l name : ";
cin>>a1;
cout<<"player 1 symb : ";
cin>>s;
while(1){
    if(s == '*'){
        cout<<"Error!!! player 1 symb : ";
        cin>>s;
    }
    else{
        break;
    }
}
cout<<"player 2 enter your f name : ";
cin>>b;
cout<<"player 2 enter your l name : ";
cin>>b1;
cout<<"player 2 symb : ";
cin>>s1;
while(1){
    if(s1 == '*' || s1 == s){
        cout<<" Error!!! player 2 symb : ";
        cin>>s1;
    }
    else{
        break;
    }
}

player p111(a,a1,s);
player p222(b,b1,s1);
game aa(p111,p222,z);
aa.printarr();
while (1){
        cout<<" Your turn Player 2 : ";
        aa.printnamep2();
        aa.setboard(aa.getplayer2symbol());
        if(aa.check(aa.getplayer2symbol())){
            k++;
            cout<<"P2 wins"<<endl;
            cout<<endl;
            break;
        }
        if(aa.checktie()){
             break;
        }
        cout<<"Your turn Player 1: ";
        aa.printnamep1();
        aa.setboard(aa.getplayer1symbol());
        if(aa.check(aa.getplayer1symbol())){
            k++;
            cout<<"P1 wins"<<endl;
            cout<<endl;
            break;
        }
    }
    if(k==0){
    cout<<"game tied"<<endl;
    }


}
}
}
