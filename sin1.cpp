// g++ sin1.cpp -o sin1.o
#include <iostream>
#include <cmath>
using namespace std;
int main (){
double PI=3.14159265358979323846;
double d,t, sine_of_t=0; //d degrees , t theta
  for ( d=0 ; d<=360 ; d = d + 15 )
  {
    t =( d * PI / 180.0);
    sine_of_t = sin(t);
      cout <<t<<" "<<d<<"\t"<< sine_of_t<<endl;
  }
  return 0;
}
