#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
using namespace std;

class square{
    private:
        char s;
      //  char* x;
      //  square* x_array();
    public:
        square();
        square(char a);
        char getsymb();
        void setsymb(char a);
        void operator = (char a);
        char& operator[](int a);
};

class player{
    private:
        string fn;
        string ln;
        char symb;
    public:
        player();
        player(string a, string b, char s);
        void setfn( string a);
        void setln( string a);
        void sets( char a);
        char gets();
        string getfn();
        string getln();
};


class game{
    private:
        player p1;
        player p2;
        int size;
        square **arr;
    public:
        game();
        game(player p11, player p22,int s);
        ~game();
        int getsize();
        void setsize(int z);
        char getplayer1symbol();
        char getplayer2symbol();
        void printnamep1();
        void printnamep2();
        void printarr();
        bool checktie();
        bool check(char sp1);
        void setboard(char sp1);
        square*& operator[](int x);
};
