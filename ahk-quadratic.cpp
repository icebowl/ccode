// example about structures
#include <iostream>
#include <cmath>
using namespace std;
// y=a(x-h)²+k
struct quadratic {
  double xstart;
  double xend;
  double aval;
  double hval;
  double kval;
} xs,xe,a,h,k;

void printq (quadratic qa,qh,qk);

int main ()
{
  double x,y;
  xs.xstart = -10;
  xe.xend = 10;
  a.aval = 4.3;
  h.hval = -3;
  k.kval = 5;
  printq(a);
  cout<<"* * * * * * *"<<endl;
  for (x = xs.xstart; x < (xe.xend+1); x++){
      y = a.aval * pow(2 , (x - h.hval)) + k.kval;
      cout<<x<<" "<<y<<endl;
  }

  return 0;
}

void printq (quadratic qa,qh,qk)
{
  cout << q.aval<<q.hval<<q.kval<<endl;
}
