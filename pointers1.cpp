// cwc pointers.cpp

#include <iostream>
using namespace std;

int main(){
	int one, two;
	int * thePointer;
	thePointer = &one;
	*thePointer  = 1111;
	thePointer = &two;
	*thePointer = 2222;
	cout<<"one is "<<one<<" "<<&one<<" \n";
	cout<<"two is "<<two<<" "<<&two<<" \n";
	cout<<"thePointer "<<thePointer<<" "<<&thePointer<<"\n";	
	return 0;
}


/*
 * 
 * 
 myvar = 25;
foo = &myvar;
bar = myvar;

 * 
 * 
 * int firstvalue, secondvalue;
  int * mypointer;

  mypointer = &firstvalue;
  *mypointer = 10;
  mypointer = &secondvalue;
  *mypointer = 20;
  cout << "firstvalue is " << firstvalue << '\n';
  cout << "secondvalue is " << secondvalue << '\n';
  return 0;
 * 
 */
