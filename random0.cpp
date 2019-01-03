#include <iostream>
#include <ctime>

using namespace std;

// function to generate and retrun random numbers.
int * getRandom(int z[10]) {

   static int  r[10];

   // set the seed
   srand( (unsigned)time( NULL ) );

   for (int i = 0; i < 10; ++i) {
      r[i] = rand();
      cout << r[i] << endl;
   }

   return r;
}

// main function to call above defined function.
int main () {

   // a pointer to an int.
   int  z[10];
   int *p;

   p = getRandom(z);

   for ( int i = 0; i < 10; i++ ) {
      cout << "*(p + " << i << ") : ";
      cout << *(p + i) << endl;
   }

   return 0;
}
