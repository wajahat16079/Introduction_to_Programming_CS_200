#include"headers.h"
#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
//using namespace std;



square :: square(){
        s='*';
    }

square :: square(char a){
        s=a;
    }
char square ::  getsymb(){
        return s;
    }
void square :: setsymb(char a){
        s=a;
    }
void square :: operator = (char a){
        s=a;
    }




player :: player(){
        fn="Player";
        ln="name";
        symb='X';
    }

player :: player(string a, string b, char s){
        fn= a;
        ln= b;
        symb=s;
    }

void player :: setfn( string a){
        fn=a;
    }

void player :: setln( string a){
        ln=a;
    }

void player :: sets( char a){
        symb=a;
    }

char player :: gets(){
        return symb;
    }

string player :: getfn(){
        return fn;
    }

string player :: getln(){
        return ln;
    }




game :: game(){
        }

game :: game(player p11, player p22,int s){
            p1=p11;
            p2=p22;
            size=s;
            arr = new square*[size];
        	for(int i=0;i<size;i++){
        		arr[i]=new square[size];
        	}
        }


int game ::  getsize(){
        	return size;
        }

void game ::  setsize(int z){
        size=z;
        }

char game ::  getplayer1symbol(){
            return p1.gets();
        }

char game :: getplayer2symbol(){
            return p2.gets();
        }

void game :: printnamep1(){
            cout<<p1.getfn()<<" "<<p1.getln()<<endl;
        }

void game ::  printnamep2(){
            cout<<p2.getfn()<<" "<<p2.getln()<<endl;
        }

void game :: printarr(){
        	for(int i=0;i<size;i++){
        		for(int j=0;j<size;j++){
        			cout<<arr[i][j].getsymb()<<"\t";
        		}
        		cout<<endl;
        	}
        }


bool game :: checktie(){
         int count=0;
         for(int i=0;i<size;i++){
        		for(int j=0;j<size;j++){
        			if(arr[i][j].getsymb()=='*'){
        			    count++;
        			    }
        		}
        	}
         if (count == 0){
         return true;
         }
         else{
         return false;
         }
         }


bool game :: check(char sp1){
                for(int i=0;i<size;i++){
                    for(int j=0;j<size-2;j++){
                        if(arr[i][0+j].getsymb()==sp1 && arr[i][1+j].getsymb()==sp1 && arr[i][2+j].getsymb()==sp1){
                        return true;
                        }
                    }
                }
                    for(int i=0;i<size;i++){
                        for(int j=0;j<size-2;j++){
                            if(arr[0+j][i].getsymb()==sp1 && arr[1+j][i].getsymb()==sp1 && arr[2+j][i].getsymb()==sp1){
                            return true;
                            }
                       }
                    }
                    for(int i=0;i<size-2;i++){
                        for(int j=0;j<size-2;j++){
                            if(arr[j][i].getsymb()==sp1 && arr[1+j][1+i].getsymb()==sp1 && arr[2+j][2+i].getsymb()==sp1){
                            return true;
                            }
                        }
                    }
                    for(int i=0;i<size-2;i++){
                        for(int j=0;j<size-2;j++){
                            if(arr[2+j][i].getsymb()==sp1 && arr[1+j][1+i].getsymb()==sp1 && arr[j][2+i].getsymb()==sp1){
                            return true;
                            }
                        }
                    }
                return false;
            }

void game :: setboard(char sp1){
            int x;
            int y;
            int z=0;
            while(z==0){
            cout<<"enter row 1-"<<size<<" : ";
                cin>>x;
                while(x<1 || x>size){
                    cout<<"error"<<endl;
                    cout<<"enter row 1-"<<size<<" : ";
                    cin>>x;
                }
                cout<<"enter col 1-"<<size<<" : ";
                cin>>y;
                while(y<1 || y>size){
                    cout<<"error"<<endl;
                    cout<<"enter col 1-"<<size<<" : ";
                    cin>>y;
                }
                   if(arr[x-1][y-1].getsymb() == '*'){

                        arr[x-1][y-1].setsymb(sp1);
                        z=-1;
                    }
                    else{
                        cout<<"invalid move"<<endl;
                    }
                    printarr();
            }
        }
square*& game::operator[](int x)
{
	return arr[x];
}
char& square::operator[](int a)
{
	return s;
}     
        
game::~game()
{
	delete [] arr;
}
