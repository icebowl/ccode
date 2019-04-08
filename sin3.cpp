// g++ sin1.cpp -o sin1.o
#include <iostream>
#include <cmath>
using namespace std;


double round4(double  var)
{
    double  value = (int)(var * 10000 + 0.0005);
    return (double)value / 10000;
}


int main (){
double PI=3.14159265358979323846;
double d,t, sine_of_t=0; //d degrees , t theta
  for ( d=0 ; d<=360 ; d = d + 15 )
  {
    t =( d * PI / 180.0);
    sine_of_t = sin(t);
    sine_of_t = round4(sine_of_t);
      cout <<t<<" "<<d<<"\t"<< sine_of_t<<endl;
  }
  return 0;
}
