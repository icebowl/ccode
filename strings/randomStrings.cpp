#include <iostream>
#include <random>
using namespace std;
int main()
{
   // https://en.cppreference.com/w/cpp/numeric/random/random_device
   default_random_engine PRNG(random_device {}());
   default_random_engine LENGTH(random_device {}());
   uniform_real_distribution<double> dist(97.0, 123.0);
	uniform_real_distribution<double> word(1.0, 45.0);

	
	int i, rint = 0, length = 0;
	string temp = "";
	string sum = "";
	length = (int)word(LENGTH);
	for (i = 0; i <= length; i++)
   { 
	   rint = (int)dist(PRNG);
	   temp = (char)rint;
	   //cout << rint<< " "<<temp<<" ";
	   sum = sum + temp;
     //if (i % 13 == 0) cout << '\n';
   }
   cout <<sum<<endl;
}
