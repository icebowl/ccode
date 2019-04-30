// cwc pointers.cpp

#include <iostream>
using namespace std;

int main(){
	int one = 111 , two = 222;
	int * p1, * p2;
	p1 = &one;
	p2 = &two;
	*p1 = 1010;
	*p2 = *p1;
	p1 = p2;
	*p2 = 2020;
	
	cout<<"one is "<<one <<" "<< one<<" \n";
	cout<<"two is "<<two <<" "<<two<<" \n";
	cout<<"one two locations "<<&one<<" "<<&two<<" \n";
	cout<<"pointer values "<<*p1<<" "<<*p2<<"\n";	
	cout<<"pointer locations "<<&p1<<" "<<&p2<<"\n";	
	return 0;
}


/*
 // more pointers
#include <iostream>
using namespace std;

int main ()
{
  int firstvalue = 5, secondvalue = 15;
  int * p1, * p2;

  p1 = &firstvalue;  // p1 = address of firstvalue
  p2 = &secondvalue; // p2 = address of secondvalue
  *p1 = 10;          // value pointed to by p1 = 10
  *p2 = *p1;         // value pointed to by p2 = value pointed to by p1
  p1 = p2;           // p1 = p2 (value of pointer is copied)
  *p1 = 20;          // value pointed to by p1 = 20
  
  cout << "firstvalue is " << firstvalue << '\n';
  cout << "secondvalue is " << secondvalue << '\n';
  return 0;
}
 */
