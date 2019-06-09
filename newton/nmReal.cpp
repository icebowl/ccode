#include <iostream>
#include <cmath>
using namespace std;

int main(){

double xn, xn1, y , xt, yt;
bool done = false;
int count = 0;
xn = -2;

while (!done){
  xn1 = xn - ((xn*xn*xn*xn) - 1.0) / (4*xn*xn*xn);
  cout <<xn1<<" "<<xn<<endl;
  if (xn ==xn1)done = true;
  xn = xn1;
  count++;
}

}
