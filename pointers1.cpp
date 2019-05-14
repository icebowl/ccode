// cwc pointers1.cpp

#include <iostream>
using namespace std;

int main(){
	int one, two;
		cout<<"&one &two "<<&one<<" "<<&two<<" \n";
	int * thePointer;
	thePointer = &one;
	*thePointer  = 1111;
	thePointer = &two;
  *thePointer = 2222;
	cout<<"one is "<<one<<" "<<&one<<" \n";
	cout<<"two is "<<two<<" "<<&two<<" \n";
	cout<<"thePointer "<<thePointer<<" "<<&thePointer<<"\n";
		cout<<"thePointer "<<*thePointer<<" "<<&thePointer<<"\n";
	return 0;
}
