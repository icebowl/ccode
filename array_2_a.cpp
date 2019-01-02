#include <iostream>
#include <array>
using namespace std;


array<array<float,4>,2> afun(array<array<float, 2>, 2> a3){
  array<array<float, 4>, 2> a2;
  /* Some operations on arr[] */
  a2[0][0] =   a3[0][0] + 100.001;
  a2[0][1] =   a3[0][1] + 10000.001;
  //cout << a2[0][0] << " " << a2[0][1] << "\n" << endl;
  return a2;// error
}

int main()
{
  array<array<float, 2>, 2> a1 = {{1.2,3.4},{5.6,7.8}};
//  a1[0][0] = 1.11111;
//  a1[0][1] = 2.11111;
  cout << a1[0][0] << " " << a1[0][1] << "\n" << endl;
  // get an array from a function
  array<array<float, 4>, 2> a4 = afun(a1);
  cout << a4[0][0] << " " << a4[0][1] << "\n" << endl;
}
