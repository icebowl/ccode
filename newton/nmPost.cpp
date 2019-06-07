
#include <iostream>

using namespace std;

struct ABi {
   double a;
   double bi;
};

void printABi(ABi abi);
ABi abiPower (ABi abi, int root);
ABi abiDivide (ABi num, ABi den);

// main()
int main() {
   ABi xyin, quo, num, den;
   xyin.a = -2.0;
   xyin.bi = 2.0;
 
   cout<<" print xyin 1"<<endl;
  // printABi(xyin);
    num = abiPower(xyin,4);
  cout<<" print xyin 2"<<endl;
//   printABi(xyin);
   den = abiPower(xyin,4);
   
   cout<<" print num den  "<<endl;
  // printABi(den);
 //  printABi(num);
   quo = abiDivide(num,den);
   cout<<" quotient "<<endl;
  // printABi(xyin);
   printABi(quo);

}
// end main()

/* print_a: print a struct passed by value (copied) */
void printABi(ABi abi) {
  double x = abi.a;
  double yi = abi.bi;
   cout <<"* * * print a+bi -> "<< x<<" + "<<yi<<" i "<<endl;
}

ABi abiPower (ABi abi, int root){
  ABi abiReturn;
  double a = abi.a;
  double bi = abi.bi;
  double xt, yti,x,yi;
  int n;
  x = a; yi = bi;
  // a+bi and x+yi loop for products
  for (n = 1; n < root; n++){
    xt = (x*a)-(yi*bi);
    yti = (a*yi)+(x*bi);
    x = xt; yi = yti;
  }
   cout<<" abiPower "<<endl;
  cout << " x " << x << " yi "<< yi <<endl;
  abiReturn.a = x;
  abiReturn.bi = yi;
 
  printABi(abiReturn);
  return abiReturn;
}

ABi abiDivide (ABi n, ABi d){
  ABi quo;
  double a = n.a;
  double bi = n.bi;
  double x = d.a;
  double yi = d.bi;
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
