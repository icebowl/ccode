// cwc pointers4.cpp

#include <iostream>
using namespace std;

int main(){
	int integers[10];
	int * pointer;
	pointer = integers;
	cout<<" print intergers[] array"<<"\n\n";
	for (int n = 0; n < 5; n++){
		//integers[n] = 0;
		cout << integers[n]<<" ";
		cout<<endl;
	}
//Increment *pointer then assign a value
	*pointer = 11;
	pointer++; *pointer = 22;
	pointer++; *pointer = 33;
	pointer++; *pointer = 44;
	pointer++; *pointer = 55;
// Increment
	cout<<" print &intergers[] memory address "<<"\n\n";

	for (int n = 0; n < 5; n++){
		cout << &integers[n]<<" ";
		cout<<endl;
	}

		return 0;

}
/*
  int numbers[5];
  int * p; p = numbers;  *p = 10;
  p++;  *p = 20;
  p = &numbers[2];  *p = 30;
  p = numbers + 3;  *p = 40;
  p = numbers;  *(p+4) = 50;
  for (int n=0; n<5; n++)
    cout << numbers[n] << ", ";
  return 0;
}
 */
