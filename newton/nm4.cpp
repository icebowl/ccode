//Newtons Method f(x) = x^4-1 f'(x) = 4x^3
// [(-2+2i)^4 - 1]/[4(-2+2i)^3]
#include <iostream>
using namespace std;
struct ABi {
   double a;
   double bi;
};

void printABi(ABi abi);
ABi abiPower (ABi abi,double coef,double term, int root);
ABi abiDivide (ABi num, ABi den);
ABi abiAdd (ABi xn1, ABi xn);
bool abiCompare (ABi xn1, ABi xn);
// main()
int main() {
   ABi xyin, xyin1, quo, num, den;
   xyin.a = -2.0;
   xyin.bi = 2.0;
   int n;
  // cout<<" print xyin 1"<<endl;
  // printABi(xyin);
  int count = 0;
  int compare = 0;
  bool done = false;
  cout<<" done before loop "<<done<<endl;
  while(!done){
    num = abiPower(xyin,1.0,-1.0,4);
    den = abiPower(xyin,4.0,0.0,3);
  //   printABi(xyin);
     //cout<<" print num den  "<<endl;
    /// printABi(num);
     //printABi(den);
     quo = abiDivide(num,den);
     cout<<" quo "<<endl;
     printABi(quo);
     xyin1 = abiAdd(xyin,quo);//subtract
     done = abiCompare(xyin1,xyin);
      cout <<"compare done "<< done <<" count "<<count<<endl;
     printABi(xyin);
     printABi(xyin1);
     xyin.a = xyin1.a;
     xyin.bi = xyin1.bi;
     //xyin = xyin1;
    printABi(xyin);
    cout<<"* * * * * * * * * "<<endl;
     count++;

   }//end for n
   //printABi(quo);

}
// end main()

/* print_a: print a struct passed by value (copied) */
void printABi(ABi abi) {
  double x = abi.a;
  double yi = abi.bi;
   cout <<"* * * print a+bi -> "<< x<<" + "<<yi<<" i "<<endl;
}

ABi abiPower (ABi abi,double coef, double term, int root){
  ABi abiReturn;
  double a = abi.a;
  double bi = abi.bi;
  double x,yi,xt, yti;
  int n;
  // a+bi and x+yi loop for products
  x=a; yi = bi;
  for (n = 1; n < root; n++){
    xt = (x*a)-(yi*bi);
    yti = (a*yi)+(x*bi);
    x = xt; yi = yti;
  }
  x = coef*x + term;
  yi = coef*yi;
//   cout<<" abiPower "<<endl;
//  cout << " x " << x << " yi "<< yi <<endl;
  abiReturn.a = x;
  abiReturn.bi = yi;

//  printABi(abiReturn);
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
//  cout<<" @ @ @ "<<endl;
 // printABi(n);
//  printABi(d);
  hn = (a*x + bi * yi);
  kni = (-1*a*yi + x * bi) ;
  //denominator
  kd = (x*x)+(yi*yi);
  //divide
  q = hn / kd;  qi = kni / kd;
  quo.a = q; quo.bi = qi;
//  cout<<" ~ ~ ~ "<<endl;
  //printABi(quo);
  return quo;
}

ABi abiAdd (ABi xn1, ABi xn){
  ABi sum;
  double x1 = xn1.a;
  double yi1 = xn1.bi;
  double x = xn.a;
  double yi = xn.bi;
  // aubstract
  sum.a = x1 - x;
  sum.bi = yi1 - yi;
  return sum;
}

bool abiCompare (ABi xn1, ABi xn){
  ABi sum;
  double x1 = xn1.a;
  double yi1 = xn1.bi;
  double x = xn.a;
  double xi = xn.bi;
  int xL,yiL,x1L,yi1L;
  bool compare =  false;
  cout<<" compare function "<<endl;
  printABi(xn1);
  printABi(xn);
  int limit = 100000;
  xL = int(x * limit);
  yiL = int(xi * limit);
  x1L = int(x1 * limit);
  yi1L = int(yi1 * limit);

  cout<<" INTEGERS " <<x1L<<" "<<xL<<" "<<yiL<<" "<<yi1L<<endl;
    if ((xL == x1L)&&(yiL == yi1L)){
      compare = true;
    cout<<"compare function "<<compare<<endl;
  }
  return compare;
}
