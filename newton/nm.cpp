/* structs.c: study the struct in C */
#include <iostream>
#include <array>
using namespace std;
struct ABi {
   double a;
   double bi;
};

void printABi(struct ABi abi);
int newtonMethod (struct ABi abi, int root, int limit);

int main() {
   struct ABi xyin;
   xyin.a = -2.0;
   xyin.bi = 2.0;
   printABi(xyin);
   newtonMethod(xyin,4,100);
}

/* print_a: print a struct passed by value (copied) */
void printABi(struct ABi abi) {
  double x = abi.a;
  double yi = abi.bi;
   cout <<"\n\n"<< "a+bi = "<<x<<" + "<<yi<<"i"<<endl;
}


int newtonMethod (struct ABi abi, int root, int limit){
  double a = abi.a, xn1,xn;
  double bi = abi.bi, yin1,yin;
  double x, yi,xt,yti;
  int n,count = 1;
  bool done = false;
  //(a+bi)^2 first pass
  cout<<"a "<<a<<" bi "<<bi<<"\n";
  //x =  ((a*a)+(-1* bi*bi));
  //yi = (a*bi)+(a*bi);
  cout<<" * * x "<<x<<" yi "<<yi<<"\n";
  // loop for products
  for (n = 1; n < root; n++){
    xt = (x*a)-(yi*bi);
    yti = (a*yi)+(x*bi);
    x = xt; yi = yti;
    cout<<" * * nx "<<xt<<" yi "<<yti<<"\n";
  }
  cout<<" * * x "<<x<<" yi "<<yi<<"\n";
  count ++;


  return count;
}
