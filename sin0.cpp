// g++ sin0.cpp -o sin0.o
#include <iostream>
#include <cmath>
using namespace std;
double round3(double  var){
    double  value;
    if(var < - 1){
      value = (int)(var * 1000 - 0.005);
    }else{
      value = (int)(var * 1000 + 0.005);
    }
    return (double)value / 1000;
  }


int main (){
double PI=3.14159265358979323846;
double t,rad, sr, sm, a, p;
// t(theta) rad(radian) sr(sine results) sm(sine plus more) a(amplitude) p(period)
// get inputs for applitude and period
  cout<<"Range of Theta is from 0 to 360\n";
  cout<<"Input an Amplitude for the sine of Theta : " ;
  cin>>a;
  cout<<"Input a Period for the sine of Theta : " ;
  cin>>p;
  cout <<"Angle(t)\tsin(t)\ta*sin(t)"<<endl;
  for ( t=0 ; t<=360 ; t = t + 15 )
  {
    rad = t * (PI / 180);
    sr = sin(rad);
    sm = a * sin (p*rad);
      cout <<t<<"\t\t"<< round3(sr)<<"\t"<<"\t\t"<<sm<<endl;
  }
  return 0;
}
