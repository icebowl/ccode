// g++ pointers3.cpp -o p3.o
#include <iostream>
using namespace std;

int main(){
	int integers[10];
	int * pointer;
	pointer = integers;
	//print array
	cout<<"print intergers[] array"<<"\n\n";
	for (int n = 0; n < 10; n++){
		//integers[n] = 0;
		cout << integers[n]<<"\n";
	}
//Increment *pointer then assign a value
	*pointer = 11;
	pointer++; *pointer = 22;
	pointer++; *pointer = 33;
	pointer++; *pointer = 44;
	pointer++; *pointer = 55;
	pointer=pointer +2; *pointer = 77;
	//print array memory locations
	cout<<"\nprint &intergers[] memory address "<<"\n\n";
	for (int n = 0; n < 10; n++){
		cout << &integers[n]<<"\n";
		cout<<endl;
	}
	//print array memory locations
	cout<<"\nprint &intergers[] memory address "<<"\n\n";
	for (int n = 0; n < 10; n++){
		cout << integers[n]<<"\n";
		cout<<endl;
	}
 return 0;
}
