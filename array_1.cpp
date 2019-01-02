#include <iostream>
#include <array>
using namespace std;


array<array<float,4>,2> afun(array<array<float, 2>, 2> a3;){
  array<array<float, 4>, 2> a2;
  /* Some operations on arr[] */
  a2[0][0] = 10.1;
  a2[0][1] = 20.1;
  //cout << a2[0][0] << " " << a2[0][1] << "\n" << endl;
  return a2;// error
}

int main()
{
  array<array<float, 2>, 2> a1;
  a1[0][0] = 1.1;
  a1[0][1] = 2.1;
  cout << a1[0][0] << " " << a1[0][1] << "\n" << endl;
  // get an array from a function
  array<array<float, 4>, 2> a4 = afun(a1);
  cout << a3[0][0] << " " << a3[0][1] << "\n" << endl;
}
