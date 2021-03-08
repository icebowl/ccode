#include <iostream>
using namespace std;

int main(){
	// Initialize variables
	int i ;   //- stores integers (whole numbers), without decimals, such as 123 or -123
	double d; //-  floating point numbers, with decimals, such as 19.99 or -19.99
	float f; // - floating point number that a smaller than double
	char c ;  //- stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
	string s; // stores text, such as "Hello World". String values are surrounded by double quotes
	bool  done ; //  stores values with two states: true or false
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
