// main.cpp

#include <iostream>

using namespace std;

class MySet {
    private:
	//Write whatever data structure or functions you think are appropriate
	
	int data;
	int size;
	int *arr;
	
    public:
    MySet(){
	    data=0;
	    size=0;
    	arr = new int[size];
    } //constructor

    void add(int element){
    if(isMember(element)){
    cout<<"Number "<<element<<" already exists"<<endl;
    }
    else{
    	size++;
    	
    	int *temp = new int[size];
    		for(int i=0;i<size-1;i++){
    		temp[i]=arr[i];
    		}
     	
    	temp[size-1]=element;
    	delete[] arr;
      
       arr = new int[size];
    	   
  	   for(int i=0;i<size;i++){
    	       arr[i] = temp[i];
          }
   
          
    
    delete[] temp;
    }
    } 
    // add an element
    
void remove(int element){
//    cout<<"remove called"<<endl;
    int index;
    if(isMember(element)){
    	for(int i=0;i<size;i++){
    		if(arr[i] == element){
    			index=i;
    		}
    	}
    size--;
    int *temp = new int[size];
    	for(int i=0;i<index;i++){
    		temp[i]=arr[i];
    	}
    	for(int i=index;i<size;i++){
    	temp[i]=arr[i+1];
    	}

    
    delete[] arr;
    arr = new int[size];
    
    	for(int i=0;i<size;i++){
    		arr[i]=temp[i];
    	}
    delete[] temp;
    
    
    }
    else{
    cout<<"Number "<<element<<" does not exist in the set"<<endl;
    }
    
    }
    
    
    
    
    
    
     // remove an element
    int count(){
    	return size;
    } // returns present count of the elements
	
	
	
bool isMember(int element){
		for (int i=0;i<size;i++){
			if(arr[i] == element){
				return true;			
			}
		}		
		return false;	
	
	} //returns if an element is present
	
void print(){
	int index=0;
	int temp[size];
	int min = arr[0];
	cout<<arr[0]<<endl;	

for (int j=0;j<size;j++)
{	
	for (int i=0;i<size;i++){ 
		if(min >arr[i]){
			min=arr[i];
			index=i;
		}
	}

//cout<<"index ="<<index<<endl;
// max value in c++ by int = 2,147,483,647
temp[j]=min;

arr[index]=2147483647;
min=2147483647;
}

 for(int i=0;i<size;i++){
                arr[i] = temp[i];
                } 


	cout<<"_______________"<<endl;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
	cout<<"<<>>><<><><><><><><>"<<endl;
		
 //prints all elements in ascending order
}
};

int main() {
	MySet mySet;
	cout<<"hello"<<endl;


	mySet.add(20); // add 20 to the set

	mySet.add(7); // add 7 to the set
	mySet.add(4); // add 4 to the set
	mySet.add(7);
	cout<<mySet.isMember(7)<<endl;
	cout<<mySet.isMember(1)<<endl;
	cout<<endl;
	mySet.print();
	cout<<endl;



	cout<<"cout = "<<mySet.count()<<endl; // this should print all the current elements in ascending order

	mySet.add(4);


	mySet.remove(4); // this should remove 4 from the set
	mySet.remove(10);
	mySet.print(); // this should print all the current elements in ascending order
	cout << mySet.count()<<endl; // should output count of all members of the set






	if(mySet.isMember(20)) {
		cout << "20 is a member of the set" << endl;
	} else {
		cout << "20 is not a member of the set" << endl;
	}

	mySet.add(0);
	mySet.add(-5);

	mySet.print();

	mySet.remove(7);
	mySet.remove(20);

	mySet.print();
	cout << mySet.count(); // should output count of all members of the set

	return 0;
}
