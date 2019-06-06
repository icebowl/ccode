/* structs.c: study the struct in C */
#include <iostream>
#include <array>
using namespace std;
struct ABi {
   double a;
   double bi;
};

void printABi(struct ABi abi);
ABi abiPower (struct ABi abi, int root);
ABi abiDivide (struct ABi num, ABi den);

// main()
int main() {
   struct ABi xyin, xyin1, quo, num, den;
   xyin.a = -2.0;
   xyin.bi = 1.0;
   //printABi(xyin);
   xyin1 = abiPower(xyin,4);
   cout<<" print xyin1 power  "<<endl;
   //printABi(xyin1);
  // printABi(xyin);
   num = abiPower(xyin,4);
  // printABi(xyin);
   den = abiPower(xyin,4);
   cout<<"\n --- \n print num "<<endl;
    printABi(num);
    cout<<"\n ---\n print den "<<endl;
     printABi(den);
   quo = abiDivide(num,den);
   cout<<" quotient "<<endl;
   printABi(xyin);
   printABi(quo);

}
// end main()
/* print_a: print a struct passed by value (copied) */
void printABi(struct ABi abi) {
  double x = abi.a;
  double yi = abi.bi;
   cout <<"* * * print a+bi * * * \n"<< "a+bi = "<<x<<" + "<<yi<<"i \n * * * * * * * \n"<<endl;
}

ABi abiPower (struct ABi abi, int root){
  double a = abi.a;
  double bi = abi.bi;
  //double xn1,xn, yin1,yin,x, yi,xt,yti;
  double xt, yti,x,yi;
  int n;
  bool done = false;
//  cout<<"a "<<a<<" bi "<<bi<<"\n";
//  cout<<" * * x "<<x<<" yi "<<yi<<"\n";
  // a+bi and x+yi loop for products
  for (n = 1; n < root; n++){
    xt = (x*a)-(yi*bi);
    yti = (a*yi)+(x*bi);
    x = xt; yi = yti;
    //cout<<" * * nx "<<xt<<" yi "<<yti<<"\n";
  }
  //cout<<" * * x "<<x<<" yi "<<yi<<"\n";
  abi.a = x;
  abi.bi = yi;
  return abi;
}

ABi abiDivide (struct ABi num, struct ABi den){
  struct ABi quo;
  double a = num.a;
  double bi = num.bi;
  double x = den.a;
  double yi = den.bi;
  double hn,kni ,kd,q,qi;
  // numberator
  hn = (a*x + bi * yi);
  kni = (-1*a*yi + x * bi) ;
  //denominator
  kd = (x*x)+(yi*yi);
  //divide
  q = hn / kd;  qi = kni / kd;
  quo.a = q; quo.bi = qi;
  return quo;
}
