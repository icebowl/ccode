/* structs.c: study the struct in C */
#include <iostream>
#include <array>
using namespace std;
struct ABi {
   double a;
   double bi;
};

void printABi(struct ABi abi);
ABi abiPower (struct ABi abi, int root, int limit);
ABi abiDivide (struct ABi num, ABi den,ABi quotient);
int main() {
   struct ABi xyin, xyin1, quo, num, den;
   xyin.a = -2.0;
   xyin.bi = 2.0;
   printABi(xyin);
   xyin = abiPower(xyin,4);
   printABi(xyin);
   num = abiPower(xyin,4);
   den = abiPower(xyin,3);

   quo = abiDivide(num,den);
   cout<<" quotient "<<endl;
   printABi(quo);

}

/* print_a: print a struct passed by value (copied) */
void printABi(struct ABi abi) {
  double x = abi.a;
  double yi = abi.bi;
   cout <<"\n\n"<< "a+bi = "<<x<<" + "<<yi<<"i"<<endl;
}

ABi abiPower (struct ABi abi, int root){
  double a = abi.a, xn1,xn;
  double bi = abi.bi, yin1,yin;
  double x, yi,xt,yti;
  int n,count = 1;
  bool done = false;
  cout<<"a "<<a<<" bi "<<bi<<"\n";
  cout<<" * * x "<<x<<" yi "<<yi<<"\n";
  // a+bi and x+yi loop for products
  for (n = 1; n < root; n++){
    xt = (x*a)-(yi*bi);
    yti = (a*yi)+(x*bi);
    x = xt; yi = yti;
    cout<<" * * nx "<<xt<<" yi "<<yti<<"\n";
  }
  cout<<" * * x "<<x<<" yi "<<yi<<"\n";
  count ++;
  abi.a = x;
  abi.bi = yi;
  return abi;
}

ABi abiDivide (struct ABi num, ABi den){
  struct ABi quo;
  double a = num.a;
  double bi = num.bi;
  double x = den.a;
  double yi = den.bi;
  double h,ki ,hd;
  // numberator
  
  //denominator


  return quo;
}
