// g++ cossin0.cpp -o cossin0.o
#include <iostream>
#include <cmath>
using namespace std;

double round4(double  var)
{  double  value;
    if (var < 0){
          value = (int)(var * 10000 - 0.00005);
        }
    else{
          value = (int)(var * 10000 + 0.00005);
      }
    return (double)value / 10000;
}

int main (){
double PI=3.14159265;
double c, t, rad, cr, sr;// cosine result sine result
//t theta in terms of degrees
  cout <<"Theta\tcos(t)\tsin(t) \n";
  for ( t=0 ; t<=360 ; t = t + 15 )
  {
    rad = t * (PI / 180);
    cr = cos(rad);
    sr= sin(rad);
    c = cr*cr + sr * sr;
    cout <<t<<"\t"<<round4(cr)<<"\t"<<round4(sr)<<"\t"<<round4(c)<<"\n";
  }
  return 0;
}
