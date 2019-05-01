// cwc pointers.cpp

#include <iostream>
using namespace std;

int main(){
	int integers[10];
	int * pointer;
	pointer = integers; *integers = 11;
	pointer++; *pointer = 22;
	pointer = &integers[2];	*pointer = 33;
	pointer = integers + 3; *pointer = 44;
	pointer = integers; *(pointer+4) = 55;

	for (int n = 0; n < 5; n++)
		cout << integers[n]<<" ";

		cout<<endl;
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
