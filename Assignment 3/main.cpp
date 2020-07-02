
//Assignment 3
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <fstream>
#include <cmath>
#include <ctime>
using namespace std;


struct cards {
	int num;
	char suit;
	string rank;
}
;
void initialcards(cards cards1[52]) {

	cards1[0].num = 1;
	cards1[1].num = 2;
	cards1[2].num = 3;
	cards1[3].num = 4;
	cards1[4].num = 5;
	cards1[5].num = 6;
	cards1[6].num = 7;
	cards1[7].num = 8;
	cards1[8].num = 9;
	cards1[9].num = 10;
	cards1[10].num = 11;
	cards1[11].num = 12;
	cards1[12].num = 13;
	cards1[13].num = 1;
	cards1[14].num = 2;
	cards1[15].num = 3;
	cards1[16].num = 4;
	cards1[17].num = 5;
	cards1[18].num = 6;
	cards1[19].num = 7;
	cards1[20].num = 8;
	cards1[21].num = 9;
	cards1[22].num = 10;
	cards1[23].num = 11;
	cards1[24].num = 12;
	cards1[25].num = 13;
	cards1[26].num = 1;
	cards1[27].num = 2;
	cards1[28].num = 3;
	cards1[29].num = 4;
	cards1[30].num = 5;
	cards1[31].num = 6;
	cards1[32].num = 7;
	cards1[33].num = 8;
	cards1[34].num = 9;
	cards1[35].num = 10;
	cards1[36].num = 11;
	cards1[37].num = 12;
	cards1[38].num = 13;
	cards1[39].num = 1;
	cards1[40].num = 2;
	cards1[41].num = 3;
	cards1[42].num = 4;
	cards1[43].num = 5;
	cards1[44].num = 6;
	cards1[45].num = 7;
	cards1[46].num = 8;
	cards1[47].num = 9;
	cards1[48].num = 10;
	cards1[49].num = 11;
	cards1[50].num = 12;
	cards1[51].num = 13;

	cards1[0].suit = 'd';
	cards1[1].suit = 'd';
	cards1[2].suit = 'd';
	cards1[3].suit = 'd';
	cards1[4].suit = 'd';
	cards1[5].suit = 'd';
	cards1[6].suit = 'd';
	cards1[7].suit = 'd';
	cards1[8].suit = 'd';
	cards1[9].suit = 'd';
	cards1[10].suit = 'd';
	cards1[11].suit = 'd';
	cards1[12].suit = 'd';
	cards1[13].suit = 'h';
	cards1[14].suit = 'h';
	cards1[15].suit = 'h';
	cards1[16].suit = 'h';
	cards1[17].suit = 'h';
	cards1[18].suit = 'h';
	cards1[19].suit = 'h';
	cards1[20].suit = 'h';
	cards1[21].suit = 'h';
	cards1[22].suit = 'h';
	cards1[23].suit = 'h';
	cards1[24].suit = 'h';
	cards1[25].suit = 'h';
	cards1[26].suit = 'c';
	cards1[27].suit = 'c';
	cards1[28].suit = 'c';
	cards1[29].suit = 'c';
	cards1[30].suit = 'c';
	cards1[31].suit = 'c';
	cards1[32].suit = 'c';
	cards1[33].suit = 'c';
	cards1[34].suit = 'c';
	cards1[35].suit = 'c';
	cards1[36].suit = 'c';
	cards1[37].suit = 'c';
	cards1[38].suit = 'c';
	cards1[39].suit = 's';
	cards1[40].suit = 's';
	cards1[41].suit = 's';
	cards1[42].suit = 's';
	cards1[43].suit = 's';
	cards1[44].suit = 's';
	cards1[45].suit = 's';
	cards1[46].suit = 's';
	cards1[47].suit = 's';
	cards1[48].suit = 's';
	cards1[49].suit = 's';
	cards1[50].suit = 's';
	cards1[51].suit = 's';

	cards1[0].rank = "A";
	cards1[1].rank = "2";
	cards1[2].rank = "3";
	cards1[3].rank = "4";
	cards1[4].rank = "5";
	cards1[5].rank = "6";
	cards1[6].rank = "7";
	cards1[7].rank = "8";
	cards1[8].rank = "9";
	cards1[9].rank = "10";
	cards1[10].rank = "J";
	cards1[11].rank = "Q";
	cards1[12].rank = "K";
	cards1[13].rank = "A";
	cards1[14].rank = "2";
	cards1[15].rank = "3";
	cards1[16].rank = "4";
	cards1[17].rank = "5";
	cards1[18].rank = "6";
	cards1[19].rank = "7";
	cards1[20].rank = "8";
	cards1[21].rank = "9";
	cards1[22].rank = "10";
	cards1[23].rank = "J";
	cards1[24].rank = "Q";
	cards1[25].rank = "K";
	cards1[26].rank = "A";
	cards1[27].rank = "2";
	cards1[28].rank = "3";
	cards1[29].rank = "4";
	cards1[30].rank = "5";
	cards1[31].rank = "6";
	cards1[32].rank = "7";
	cards1[33].rank = "8";
	cards1[34].rank = "9";
	cards1[35].rank = "10";
	cards1[36].rank = "J";
	cards1[37].rank = "Q";
	cards1[38].rank = "K";
	cards1[39].rank = "A";
	cards1[40].rank = "2";
	cards1[41].rank = "3";
	cards1[42].rank = "4";
	cards1[43].rank = "5";
	cards1[44].rank = "6";
	cards1[45].rank = "7";
	cards1[46].rank = "8";
	cards1[47].rank = "9";
	cards1[48].rank = "10";
	cards1[49].rank = "J";
	cards1[50].rank = "Q";
	cards1[51].rank = "K";
}




int large(int n, int col_element[8]) {
	int l;
	l = col_element[0];
	for (int i = 1; i < n; i++)
	{
		if (col_element[i] > l)
		{
			l = col_element[i];
		}
	}
	return l;
}


void randomcards(cards **array, cards cards1[52]) {
	bool check[52];

	for (int i = 0; i < 52; i++) {
		check[i] = false;
	}

	for (int i = 0; i < 7; i++) {
		int k = rand() % 52;
		if (check[k] == false) {
			check[k] = true;
			(*(array[0] + i)).num = cards1[k].num;
			(*(array[0] + i)).suit = cards1[k].suit;
			(*(array[0] + i)).rank = cards1[k].rank;
		}
		else
			i--;
	}
	for (int i = 7; i < 14; i++) {
		int k2 = rand() % 52;

		if (check[k2] == false) {

			check[k2] = true;
			(*(array[1] + i - 7)).num = cards1[k2].num;
			(*(array[1] + i - 7)).suit = cards1[k2].suit;
			(*(array[1] + i - 7)).rank = cards1[k2].rank;

		}
		else

			i--;
	}
	for (int i = 14; i < 21; i++) {
		int k1 = rand() % 52;

		if (check[k1] == false) {
			check[k1] = true;
			(*(array[2] + i - 14)).num = cards1[k1].num;
			(*(array[2] + i - 14)).suit = cards1[k1].suit;
			(*(array[2] + i - 14)).rank = cards1[k1].rank;
		}
		else
			i--;
	}
	for (int i = 21; i < 28; i++) {
		int k = rand() % 52;

		if (check[k] == false) {
			check[k] = true;
			(*(array[3] + i - 21)).num = cards1[k].num;
			(*(array[3] + i - 21)).suit = cards1[k].suit;
			(*(array[3] + i - 21)).rank = cards1[k].rank;
		}
		else
			i--;
	}
	for (int i = 28; i < 34; i++) {
		int k = rand() % 52;

		if (check[k] == false) {
			check[k] = true;
			(*(array[4] + i - 28)).num = cards1[k].num;
			(*(array[4] + i - 28)).suit = cards1[k].suit;
			(*(array[4] + i - 28)).rank = cards1[k].rank;
		}
		else
			i--;
	}
	for (int i = 34; i < 40; i++) {
		int k = rand() % 52;

		if (check[k] == false) {
			check[k] = true;
			(*(array[5] + i - 34)).num = cards1[k].num;
			(*(array[5] + i - 34)).suit = cards1[k].suit;
			(*(array[5] + i - 34)).rank = cards1[k].rank;
		}
		else
			i--;
	}
	for (int i = 40; i < 46; i++) {
		int k = rand() % 52;

		if (check[k] == false) {
			check[k] = true;
			(*(array[6] + i - 40)).num = cards1[k].num;
			(*(array[6] + i - 40)).suit = cards1[k].suit;
			(*(array[6] + i - 40)).rank = cards1[k].rank;
		}
		else
			i--;
	}
	for (int i = 46; i < 52; i++) {
		int k = rand() % 52;

		if (check[k] == false) {
			check[k] = true;
			(*(array[7] + i - 46)).num = cards1[k].num;
			(*(array[7] + i - 46)).suit = cards1[k].suit;
			(*(array[7] + i - 46)).rank = cards1[k].rank;
		}
		else
			i--;
	}
}




void printcards(int col_element[8], cards** array)
{
	int max;
	max = large(8, col_element);
	for (int i = 0; i < max + 1; i++) {
		if (i < col_element[0])
			cout << (*(array[0] + i)).rank << (*(array[0] + i)).suit << "\t";
		else
			cout << "  \t";

		if (i < col_element[1])
			cout << (*(array[1] + i)).rank << (*(array[1] + i)).suit << "\t";
		else
			cout << "  \t";

		if (i < col_element[2])
			cout << (*(array[2] + i)).rank << (*(array[2] + i)).suit << "\t";
		else
			cout << "  \t";

		if (i < col_element[3])
			cout << (*(array[3] + i)).rank << (*(array[3] + i)).suit << "\t";
		else
			cout << "  \t";

		if (i < col_element[4])
			cout << (*(array[4] + i)).rank << (*(array[4] + i)).suit << "\t";
		else
			cout << "  \t";

		if (i < col_element[5])
			cout << (*(array[5] + i)).rank << (*(array[5] + i)).suit << "\t";
		else
			cout << "  \t";

		if (i < col_element[6])
			cout << (*(array[6] + i)).rank << (*(array[6] + i)).suit << "\t";
		else
			cout << "  \t";

		if (i < col_element[7])
			cout << (*(array[7] + i)).rank << (*(array[7] + i)).suit << "\t";
		else
			cout << "  \t";

		cout << endl;

	}
}
void printhomefreecards(int home_element[4], cards** homearray, int free_element[4], cards** freearray)
{
	int max;
	max = large(4, home_element);
	cout << "\t   Home\t\t  \t  \t  FreeCells" << endl;
	for (int i = 0; i < max + 2; i++) {
		if (i < home_element[0])
			cout << (*(homearray[0] + i)).rank << (*(homearray[0] + i)).suit << "\t";
		else
			cout << "  \t";

		if (i < home_element[1])
			cout << (*(homearray[1] + i)).rank << (*(homearray[1] + i)).suit << "\t";
		else
			cout << "  \t";

		if (i < home_element[2])
			cout << (*(homearray[2] + i)).rank << (*(homearray[2] + i)).suit << "\t";
		else
			cout << "  \t";

		if (i < home_element[3])
			cout << (*(homearray[3] + i)).rank << (*(homearray[3] + i)).suit << "\t";
		else
			cout << "  \t";

		if (i < free_element[0])
			cout << (*(freearray[0] + i)).rank << (*(freearray[0] + i)).suit << "\t";
		else
			cout << "  \t";

		if (i < free_element[1])
			cout << (*(freearray[1] + i)).rank << (*(freearray[1] + i)).suit << "\t";
		else
			cout << "  \t";

		if (i < free_element[2])
			cout << (*(freearray[2] + i)).rank << (*(freearray[2] + i)).suit << "\t";
		else
			cout << "  \t";

		if (i < free_element[3])
			cout << (*(freearray[3] + i)).rank << (*(freearray[3] + i)).suit << "\t";
		else
			cout << "  \t";

		cout << endl;

	}
}

void printfreecards(int free_element[4], cards** freearray)
{
	int max;
	max = large(4, free_element);
	cout << "\t   FreeCell" << endl;
	for (int i = 0; i < max + 1; i++) {
		if (i < free_element[0])
			cout << (*(freearray[0] + i)).rank << (*(freearray[0] + i)).suit << "\t";
		else
			cout << "  \t";

		if (i < free_element[1])
			cout << (*(freearray[1] + i)).rank << (*(freearray[1] + i)).suit << "\t";
		else
			cout << "  \t";

		if (i < free_element[2])
			cout << (*(freearray[2] + i)).rank << (*(freearray[2] + i)).suit << "\t";
		else
			cout << "  \t";

		if (i < free_element[3])
			cout << (*(freearray[3] + i)).rank << (*(freearray[3] + i)).suit << "\t";
		else
			cout << "  \t";

		cout << endl;

	}
}
void printhomecards(int home_element[4], cards** homearray)
{
	int max;
	max = large(4, home_element);
	cout << "\t   Home" << endl;
	for (int i = 0; i < max + 1; i++) {
		if (i < home_element[0])
			cout << (*(homearray[0] + i)).rank << (*(homearray[0] + i)).suit << "\t";
		else
			cout << "  \t";

		if (i < home_element[1])
			cout << (*(homearray[1] + i)).rank << (*(homearray[1] + i)).suit << "\t";
		else
			cout << "  \t";

		if (i < home_element[2])
			cout << (*(homearray[2] + i)).rank << (*(homearray[2] + i)).suit << "\t";
		else
			cout << "  \t";

		if (i < home_element[3])
			cout << (*(homearray[3] + i)).rank << (*(homearray[3] + i)).suit << "\t";
		else
			cout << "  \t";

		cout << endl;

	}
}


cards **changec2c(cards **array, int col_element[8], int source, int dest) {

	int esource = col_element[source - 1];
	int edest = col_element[dest - 1];
	cards **ch_array = new cards*[8];

	col_element[source - 1] = col_element[source - 1] - 1;
	col_element[dest - 1] = col_element[dest - 1] + 1;

	for (int i = 0; i < 8; i++) {
		ch_array[i] = new cards[col_element[i]];
	}

	(*(ch_array[dest - 1] + edest)) = (*(array[source - 1] + esource - 1));

	for (int i = 0; i < 8; i++) {
		if (i == source - 1 || i == dest - 1) {
			continue;
		}
		else {
			for (int j = 0; j < col_element[i]; j++) {
				(*(ch_array[i] + j)) = (*(array[i] + j));
			}
		}
	}
	for (int i = 0; i < col_element[dest - 1] - 1; i++) {
		(*(ch_array[dest - 1] + i)) = (*(array[dest - 1] + i));
	}
	for (int i = 0; i < col_element[source - 1]; i++) {
		(*(ch_array[source - 1] + i)) = (*(array[source - 1] + i));
	}



	return ch_array;
}


void c2c(cards **array, int col_element[8], int home_element[4], cards** homearray, int free_element[4], cards** freearray) {
	int source, dest, esource, edest;
	cout << "Enter the col num as source : ";
	cin >> source;
	cout << "Enter the col num as destination : ";
	cin >> dest;
	esource = col_element[source - 1];
	edest = col_element[dest - 1];
	if (col_element[source - 1] > 0 && col_element[dest - 1] > 0) {

		switch ((*(array[source - 1] + esource - 1)).suit)
		{
		case'c':
			if ((*(array[dest - 1] + edest - 1)).suit == 'd' || (*(array[dest - 1] + edest - 1)).suit == 'h') {
				if ((*(array[dest - 1] + edest - 1)).num - 1 == (*(array[source - 1] + esource - 1)).num) {
					array = changec2c(array, col_element, source, dest);
					printhomefreecards(home_element, homearray, free_element, freearray);
					printcards(col_element, array);
				}
			}
			break;

		case's':
			if ((*(array[dest - 1] + edest - 1)).suit == 'd' || (*(array[dest - 1] + edest - 1)).suit == 'h') {

				if ((*(array[dest - 1] + edest - 1)).num - 1 == (*(array[source - 1] + esource - 1)).num) {
					array = changec2c(array, col_element, source, dest);
					printhomefreecards(home_element, homearray, free_element, freearray);
					printcards(col_element, array);
				}
			}
			break;
		case'd':
			if ((*(array[dest - 1] + edest - 1)).suit == 'c' || (*(array[dest - 1] + edest - 1)).suit == 's') {
				if ((*(array[dest - 1] + edest - 1)).num - 1 == (*(array[source - 1] + esource - 1)).num) {
					array = changec2c(array, col_element, source, dest);
					printhomefreecards(home_element, homearray, free_element, freearray);
					printcards(col_element, array);
				}
			}
			break;
		case 'h':
			if ((*(array[dest - 1] + edest - 1)).suit == 'c' || (*(array[dest - 1] + edest - 1)).suit == 's') {
				if ((*(array[dest - 1] + edest - 1)).num - 1 == (*(array[source - 1] + esource - 1)).num) {
					array = changec2c(array, col_element, source, dest);
					printhomefreecards(home_element, homearray, free_element, freearray);
					printcards(col_element, array);
				}
			}
			break;
		}

	}
}



cards **changec2farray(cards **array,int col_element[8], int source){

    cards **ch_array=new cards*[8];
    for(int i=0;i<8;i++){
    ch_array[i]=new cards[col_element[i]];
    }

        for(int i=0;i<8;i++){
        if(i== source-1){
        continue;
        }
        else{
         for(int j=0;j<col_element[i];j++){
           (*(ch_array[i]+j))=(*(array[i]+j));
           }
        }
        }


       for(int i=0;i<col_element[source-1];i++){
           (*(ch_array[source-1]+i))=(*(array[source-1]+i));
       }

return ch_array;
}

cards **changec2farrayforhome(cards **array,int col_element[8], int source){
    col_element[source-1]=col_element[source-1]-1;
    cards **ch_array=new cards*[8];
    for(int i=0;i<8;i++){
    ch_array[i]=new cards[col_element[i]];
    }

        for(int i=0;i<8;i++){
        if(i== source-1){
        continue;
        }
        else{
         for(int j=0;j<col_element[i];j++){
           (*(ch_array[i]+j))=(*(array[i]+j));
           }
        }
        }


       for(int i=0;i<col_element[source-1];i++){
           (*(ch_array[source-1]+i))=(*(array[source-1]+i));
       }

return ch_array;
}




void c2f(cards **array,int col_element[8],int home_element[4],cards** homearray,int free_element[4],cards** freearray){
	int source, dest, esource, edest;
	cout << "Enter the col num as source : ";
	cin >> source;
	cout << "Enter the freecells col num as destination : ";
	cin >> dest;
	int size = free_element[dest - 1];
	if (size == 0) {
		cards* temp = new cards[size + 1];
		delete[] freearray[dest - 1];
		freearray[dest - 1] = temp;

	}
	else {
		cout << "there is alreaady a card there\n";
	//	return 0;
	}
	esource = col_element[source - 1];
	freearray[dest - 1][0] = array[source - 1][esource - 1];
	col_element[source-1]=col_element[source-1]-1;
	free_element[dest-1]=free_element[dest-1]+1;
    printhomefreecards( home_element, homearray, free_element, freearray);
	array = changec2farray(array,col_element,  source);
    printcards(col_element, array);
}

cards **changec2hofh(cards **array, int col_element[8],int source, int dest, cards **homearray, int home_element[4]) {


	int edest = home_element[dest - 1];
	int esource=col_element[source-1];

	home_element[dest-1]=home_element[dest-1]+1;
	cards **ch_array = new cards*[4];
    for (int i = 0; i < 4; i++) {
		ch_array[i] = new cards[home_element[i]];
	}

	(*(ch_array[dest - 1] + edest)) = (*(array[source - 1] + esource - 1));

	for (int i = 0; i < 4; i++) {
		if (i == dest - 1) {
			continue;
		}
		else {
			for (int j = 0; j < home_element[i]; j++) {
				(*(ch_array[i] + j)) = (*(homearray[i] + j));
			}
		}
	}
	for (int i = 0; i < home_element[dest - 1] - 1; i++) {
		(*(ch_array[dest - 1] + i)) = (*(homearray[dest - 1] + i));
	}




	return ch_array;
}

void c2h(cards **array,int col_element[8],int home_element[4],cards** homearray,int free_element[4],cards** freearray){
	int source, dest, esource, edest;
	cout << "Enter the col num as source : ";
	cin >> source;
	cout << "Enter the home col num as destination : ";
	cin >> dest;
	edest = home_element[dest - 1];
	esource = col_element[source - 1];
	int size;
	size=edest = home_element[dest - 1];
	if (size == 0 && array[source-1][esource-1].num == 1) {
		cards* temp = new cards[size + 1];
		//delete[] homearray[dest - 1];
		homearray[dest - 1] = temp;
		homearray[dest - 1][0] = array[source - 1][esource - 1];
	    col_element[source-1]=col_element[source-1]-1;
	    home_element[dest-1]=home_element[dest-1]+1;

        printhomefreecards( home_element, homearray, free_element, freearray);
        array = changec2farray(array,col_element, source);
	    printcards(col_element, array);
	}
	else if(size>0 && array[source-1][esource-1].suit == homearray[dest-1][edest-1].suit && array[source-1][esource-1].num == homearray[dest-1][edest-1].num+1){
    homearray=changec2hofh(array, col_element, source, dest,homearray, home_element);
	array = changec2farrayforhome(array,col_element, source);
	printhomefreecards( home_element, homearray, free_element, freearray);
	printcards(col_element, array);
	}


	else {
		cout << "invalid move  \n";
	//	return 0;
	}
}

cards **changef2carray(cards **array,int col_element[8], int source,int dest,int free_element[4],cards **freearray){
    	int edest = col_element[dest - 1];
        int	esource = free_element[source - 1];

    col_element[dest-1]=col_element[dest-1]+1;
    cards **ch_array = new cards*[8];


    for(int i=0;i<8;i++){
    ch_array[i]=new cards[col_element[i]];
    }

        for(int i=0;i<8;i++){
        if(i== dest-1){
        continue;
        }
        else{
         for(int j=0;j<col_element[i];j++){
           (*(ch_array[i]+j))=(*(array[i]+j));
           }
        }
        }
        for(int i=0;i<col_element[dest-1]-1;i++){

        ch_array[dest-1][i] = array[dest-1][i];
        }
       // ch_array[dest - 1][edest+1]=freearray[source - 1][esource - 1];
         ch_array[dest - 1][edest]=freearray[source - 1][esource - 1];

        cout<<"helloo2"<<endl;
        return ch_array;
}
cards **changef2chome(cards **array,int col_element[8], int source,int dest,int free_element[4],cards **freearray){
    	int edest = col_element[dest - 1];
        int	esource = free_element[source - 1];
		free_element[source-1]=free_element[source-1]-1;
		cards** ch_free = new cards*[4];
		//delete[] homearray[dest - 1];
	for(int i=0;i<4;i++){
        ch_free[i]=new cards[free_element[i]];
    }
   for(int i=0;i<4;i++){
        if(i== source-1){
        continue;
        }
        else{
         for(int j=0;j<free_element[i];j++){
           (*(ch_free[i]+j))=(*(freearray[i]+j));
           }
        }
        }
        for(int i=0;i<free_element[source-1] - 1;i++){

        ch_free[dest-1][i] = freearray[dest-1][i];
        }

        return ch_free;
}
void f2c(cards **array,int col_element[8],int home_element[4],cards** homearray,int free_element[4],cards** freearray){
   int source, dest, esource, edest;
	cout << "Enter the freecells col num as source : ";
	cin >> source;
	cout << "Enter the  col num as destination : ";
	cin >> dest;
	int size;
	size=free_element[source - 1];
	edest = col_element[dest - 1];
	esource = free_element[source - 1];

	if (size > 0 && array[dest-1][edest-1].num == freearray[source-1][esource-1].num +1) {
		switch (freearray[source-1][esource-1].suit)
		{
		case'c':
			if (array[dest-1][edest-1].suit == 'd' || array[dest-1][edest-1].suit == 'h') {
            //updatearray
                array = changef2carray(array,col_element, source, dest, free_element,freearray);
                freearray=changef2chome(array,col_element,source,dest,free_element,freearray);
				printhomefreecards(home_element,  homearray, free_element, freearray);
	            printcards(col_element, array);
			}
			break;
		case's':
			if (array[dest-1][edest-1].suit == 'd' || array[dest-1][edest-1].suit == 'h') {
			    array = changef2carray(array,col_element, source, dest, free_element,freearray);
			    freearray=changef2chome(array,col_element,source,dest,free_element,freearray);
				printhomefreecards(home_element,  homearray, free_element, freearray);
	            printcards(col_element, array);
			}
			break;
		case'd':
			if (array[dest-1][edest-1].suit == 'c' || array[dest-1][edest-1].suit == 's') {
			    array = changef2carray(array,col_element, source, dest, free_element,freearray);
            	freearray=changef2chome(array,col_element,source,dest,free_element,freearray);
				printhomefreecards(home_element,  homearray, free_element, freearray);
	            printcards(col_element, array);
			}
			break;
		case 'h':
			if (array[dest-1][edest-1].suit == 'c' || array[dest-1][edest-1].suit == 's') {
			array = changef2carray(array,col_element, source, dest, free_element,freearray);
    		freearray=changef2chome(array,col_element,source,dest,free_element,freearray);
			printhomefreecards(home_element,  homearray, free_element, freearray);
	        printcards(col_element, array);
			}
			break;
		}
}
    else{
        cout<<"invalid move"<<endl;
        }
}

cards **changef2hofhome(cards **freearray, int free_element[8],int source, int dest, cards **homearray, int home_element[4])
 {
	int edest = home_element[dest - 1];
	int esource=free_element[source-1];

	home_element[dest-1]=home_element[dest-1]+1;

	cards **ch_home = new cards*[4];
    for (int i = 0; i < 4; i++) {
		ch_home[i] = new cards[home_element[i]];
	}

	ch_home[dest-1][edest] = freearray[source - 1] [esource-1];

	for (int i = 0; i < 4; i++) {
		if (i == dest - 1) {
			continue;
		}
		else {
			for (int j = 0; j < home_element[i]; j++) {
				(*(ch_home[i] + j)) = (*(homearray[i] + j));
			}
		}
	}
	for (int i = 0; i < home_element[dest - 1] - 1; i++) {
		(*(ch_home[dest - 1] + i)) = (*(homearray[dest - 1] + i));
	}
	return ch_home;
}

void f2h(cards **array,int col_element[8],int home_element[4],cards** homearray,int free_element[4],cards** freearray){
   int source, dest, esource, edest;
	cout << "Enter the freecells col num as source : ";
	cin >> source;
	cout << "Enter the  home col num as destination : ";
	cin >> dest;
	int size;
	size=free_element[source - 1];
	edest = home_element[dest - 1];
	esource = free_element[source - 1];


	if (size == 0 && freearray[source-1][esource-1].num == 1) {

	}





	else if (size > 0 && homearray[dest-1][edest-1].num+1 == freearray[source-1][esource-1].num) {
		switch (freearray[source-1][esource-1].suit)
		{
		case'c':
			if (homearray[dest-1][edest-1].suit == 'c') {
                homearray = changef2hofhome(freearray,free_element,source,dest,homearray,home_element);
                freearray=changef2chome(array,col_element,source,dest,free_element,freearray);
				printhomefreecards(home_element,  homearray, free_element, freearray);
	            printcards(col_element, array);
			}
			break;
		case's':
			if (homearray[dest-1][edest-1].suit == 's' ) {
			    homearray = changef2hofhome(freearray,free_element,source,dest,homearray,home_element);

			    freearray=changef2chome(array,col_element,source,dest,free_element,freearray);
				printhomefreecards(home_element,  homearray, free_element, freearray);
	            printcards(col_element, array);
			}
			break;
		case'd':
			if (homearray[dest-1][edest-1].suit == 'd') {
			    homearray = changef2hofhome(freearray,free_element,source,dest,homearray,home_element);
            	freearray=changef2chome(array,col_element,source,dest,free_element,freearray);
				printhomefreecards(home_element,  homearray, free_element, freearray);
	            printcards(col_element, array);
			}
			break;
		case 'h':
			if (homearray[dest-1][edest-1].suit == 'h') {
			homearray = changef2hofhome(freearray,free_element,source,dest,homearray,home_element);
    		freearray=changef2chome(array,col_element,source,dest,free_element,freearray);
			printhomefreecards(home_element,  homearray, free_element, freearray);
	        printcards(col_element, array);
			}
			break;
		}
}
    else{
        cout<<"invalid move"<<endl;
        }
}




int main() {
    srand(time(NULL));
	int col_element[8] = {7, 7, 7, 7, 6, 6, 6, 6};
	int home_element[4] = {0, 0, 0, 0};
	int free_element[4] = {0, 0, 0, 0};
	cards** homearray = new cards* [4];
	cards** freearray = new cards* [4];
	cards** array = new cards* [8];

	ifstream in;
	ofstream out;
	out.open("output.txt");
	cards card2[4];

	for (int i = 0; i < 8; i++) {
		array[i] = new cards[col_element[i]];
	}
	for (int i = 0; i < 4; i++) {
		freearray[i] = new cards[free_element[i]];

	}

	for (int i = 0; i < 4; i++) {
		homearray[i] = new cards[home_element[i]];
	}
    cards cards1[52];
	initialcards(cards1);


int z1=0;
int z=0;
while(z1!=-1){
cout<<"enter 1 for New Game"<<endl;
cout<<"enter 2 to resume previously saved game"<<endl;
cout<<"enter -1 to quit"<<endl;
cin>>z1;


	if(z1==1){
	randomcards(array, cards1);

	printhomefreecards(home_element,  homearray, free_element, freearray);
	printcards(col_element, array);

	while(z!=-1){
   cout<<"enter 1 for col to col move"<<endl;
   cout<<"enter 2 for col to free move"<<endl;
   cout<<"enter 3 for col to home move"<<endl;
   cout<<"enter 4 for free to col move"<<endl;
   cout<<"enter 5 for free to home move"<<endl;
   cout<<"enter 6 to save game"<<endl;
   cin>>z;

if(z==1){
c2c(array,col_element, home_element, homearray,free_element,freearray);
}
else if(z==2){
c2f(array, col_element, home_element, homearray, free_element,freearray);
}
else if(z==3){
c2h(array, col_element, home_element, homearray, free_element,freearray);
}
else if(z==4){
 f2c(array, col_element, home_element, homearray, free_element,freearray);
}
else if(z==5){
//free to home ????????

f2h(array, col_element, home_element, homearray, free_element,freearray);





}
else if(z==6){
//    cout<<"thanks for trying"<<endl;

for(int i=0;i<8;i++){
out<<col_element[i]<<"\t";
}
out<<endl;
for(int j=0;j<8;j++){
for(int i=0;i<col_element[j];i++){
out<<array[j][i].num<<"\t";
out<<array[j][i].rank<<"\t";
out<<array[j][i].suit<<"\t";
}
out<<endl;
}
out<<endl;

for(int i=0;i<4;i++){
out<<free_element[i]<<"\t";
}
out<<endl;
for(int j=0;j<4;j++){
for(int i=0;i<free_element[j];i++){
out<<freearray[j][i].num<<"\t";
out<<freearray[j][i].rank<<"\t";
out<<freearray[j][i].suit<<"\t";
}
out<<endl;
}
out<<endl;

for(int i=0;i<4;i++){
out<<home_element[i]<<"\t";
}
out<<endl;

for(int j=0;j<4;j++){
for(int i=0;i<home_element[j];i++){
out<<homearray[j][i].num<<"\t";
out<<homearray[j][i].rank<<"\t";
out<<homearray[j][i].suit<<"\t";
}
out<<endl;
}
out<<endl;

out.close();



}

}// while z
}//z1 1
else if(z1==2){
z=0;
//cout<<"thanks for trying....play New Game"<<endl;
in.open("output.txt");

for(int i=0;i<8;i++){
in>>col_element[i];
}

for(int j=0;j<8;j++){
for(int i=0;i<col_element[j];i++){
in>>array[j][i].num;
in>>array[j][i].rank;
in>>array[j][i].suit;
}
}
for(int i=0;i<4;i++){
in>>free_element[i];
}

for(int j=0;j<4;j++){
for(int i=0;i<free_element[j];i++){
in>>freearray[j][i].num;
in>>freearray[j][i].rank;
in>>freearray[j][i].suit;
}

}
for(int i=0;i<4;i++){
in>>col_element[i];
}


for(int j=0;j<4;j++){
for(int i=0;i<home_element[j];i++){
in>>homearray[j][i].num;
in>>homearray[j][i].rank;
in>>homearray[j][i].suit;


printhomefreecards(home_element,  homearray, free_element, freearray);
printcards(col_element, array);
		
while(z!=-1){
 cout<<"enter 1 for col to col move"<<endl;
  cout<<"enter 2 for col to free move"<<endl;
  cout<<"enter 3 for col to home move"<<endl;
    cout<<"enter 4 for free to col move"<<endl;
   cout<<"enter 5 for free to home move"<<endl;
    cout<<"enter 6 to save game"<<endl;
	cin>>z;
				             
if(z==1){
   c2c(array,col_element, home_element, homearray,free_element,freearray);
         }
    else if(z==2){
   c2f(array, col_element, home_element, homearray, free_element,freearray);
    }
 else if(z==3){
	 c2h(array, col_element, home_element, homearray, free_element,freearray);
	  }
else if(z==4){
	 f2c(array, col_element, home_element, homearray, free_element,freearray); 
	   }
 else if(z==5){
 f2h(array, col_element, home_element, homearray, free_element,freearray);   
  }	
else if(z==6){
		  }





}
}






}
}
}
	return 0;

}
