// cvariables.cpp
#include <iostream>
using namespace std;

int main(){
	// Initialize variables
	int i ;   //-integers 
	double d; //- floating point numbers
	float f; // - floating point number that a smaller than double
	char c ;  //- stores single characters 'c'
	string s; // stores text, "Hello World". 
	bool  done ; //  true or false
	// Assign data to each variable
	i = 65521;
	d = 3.1415926535897932384626;
	f = 2.7182818284590;
	c = 'A';
	s = "This is a string of characters.";
	done = true;
	// Print the variables data
	cout << i << "\n";
	cout << d << "\n";
	cout << f << "\n";
	cout << c << "\n";
	cout << s << "\n";
	cout << done << "\n";
	done = false;
	cout << done<< "\n";
	return 0;
}
