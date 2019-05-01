#include<iostream>
#include<cmath>
using namespace std;
int main(){
  float k,x,y,r;
  x = 5; r = 100;
//  k = -1*pow(x,2)+pow(r,2);
for (x = 1; x <100;x++){
  y = pow(-1*pow(x,2)+pow(r,2),0.5);
  cout <<"x "<<x<<" y "<<y<<endl;
}

}
