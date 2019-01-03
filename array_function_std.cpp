// https://embeddedartistry.com/blog/2017/6/28/an-introduction-to-stdarray
#include <stdio.h>
#include <iostream>
#include <array>
using namespace std;
double myfunc(){
      array<double,5> a2 = {-1, 1, 3, 2, 0};
      //float count = 1.1;
      for (int n = 0; n < 3; n++){
      //  arr[0][n] = count;
        count = count + 0.1;
      }
    return a2;
   }

int main(int argc, char **argv)
{
    array<int, 10> a1;
    //array<int, 2>, 2> myarray = {{5, 8},{8, 3}};
    //myarray=myfunc();
    for (int n = 0; n < 3; n++){
      //cout << myarray[0][n]<<" ";
    }
    return 0;
}
