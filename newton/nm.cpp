/* structs.c: study the struct in C */
#include <iostream>
#include <array>
using namespace std;
struct ABi {
   double a;
   double bi;
};

void printABi(struct ABi abi);
int iNewtonMethod (struct ABi abi, int root, int limit)
int main() {
   struct ABi xyi0, xyi1;
   xyi0.a = -2.0;
   xyi0.bi = -2.0;
   printABi(xyi0);
}

/* print_a: print a struct passed by value (copied) */
void printABi(struct ABi abi) {
   cout <<"\n\n"<< "a+bi = "<<abi.a<<" + "<<abi.bi<<"i"<<endl;
}


int iNewtonMethod (struct ABi abi, int root, int limit){
  int r; //double n;
  double val = 0;
  int count = 0;
  double x0 = abi.a;
  double yi0 = abi.bi;
  int n = root;
  double x1,yi1,na,nbi, da, dbi;
  int i;
  long x0long, y0ilong,x1long, y1ilong, longlimit = limit;
  boolean done = false;
  while (!done){
  //  ipn = iProduct(x0,yi0,n);
  //  na = ipn.avalue() - 1; nbi = ipn.bvalue();
    //iProduct ipd = new Iproduct(x0,yi0,n-1);
  //  da = n* ipd.avalue(); dbi = n* ipd.bvalue();
  //  di = divideImaginary(na,nbi,da,dbi);
    x1 = x0 - di.a();
    yi1 = yi0 - di.b();
    x0long = (long) (x0 * longlimit);
    x1long= (long) (x1 * longlimit);
    y0ilong = (long) (yi0 * longlimit);
    y1ilong= (long)( yi1 * longlimit);
    count++;
           //
    if (((x0long == x1long) & (y0ilong == y1ilong))|| (count > 255))done = true;
    x0 = x1; yi0 = yi1;
  }
    return count;
}
