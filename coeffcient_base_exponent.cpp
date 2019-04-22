// power function cwc
#include <iostream>
using namespace std;
// coefficient (c) base (b)  exponent (e)
long double cbe  (double c, double b, int e)
{
  int exponent = e;
  double value = 1;
  while (exponent > 0 && e!=0){
      value = c * (b * value);
      exponent--;
  }
  return value;
}

int main(){
  int x;
  long double y;
  cout.precision(23);
  for (x = 0; x < 31; x++){
    y = cbe(1,2,x);
    cout<<x<<"\t"<<y<<endl;
  }
  return 0;
}
