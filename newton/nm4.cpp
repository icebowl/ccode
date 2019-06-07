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
  //   cout<<" print xyin 2"<<endl;
  //   printABi(xyin);
     //cout<<" print num den  "<<endl;
    /// printABi(num);
     //printABi(den);
     quo = abiDivide(num,den);
     xyin1 = abiAdd(xyin,quo);

     //cout<<"n = "<<n<<" quotient "<<endl;
     //printABi(xyin1);
     done == false;
     //done = abiCompare(xyin1,xyin);
     xyin = xyin1;
     cout <<"compare done "<< done <<" count "<<count<<endl;
     count++;
     done == false;
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
  double a = xn.a;
  double bi = xn.bi;
  double x = xn1.a;
  double yi = xn1.bi;
  sum.a = x + a;
  sum.bi = yi + bi;

  return sum;
}

bool abiCompare (ABi xn1, ABi xn){
  ABi sum;
  double a = xn.a;
  double bi = xn.bi;
  double x = xn1.a;
  double yi = xn1.bi;
  long aL,biL,xL,yiL;
  bool compare =  false;
  cout<<"compare "<<endl;
  printABi(xn1);
  printABi(xn);
  long limit = 10000000000;
  aL = long(a * limit);
  xL = long(x * limit);
  biL = long(bi * limit);
  yiL = long(yi * limit);

  cout <<aL<<" "<<xL<<" "<<biL<<" "<<yiL<<endl;
  //if ((aL == xL)&&(biL == yiL))
    if ((aL == xL)&&(biL == yiL))  {
      compare = true;
    cout<<"compare function "<<compare<<endl;
    return compare;
  }
}
