
#include <stdio.h>
#include <iostream>
using namespace std;

float* myfunc(){
      static float arr[2];
      float count = 1.1;
      for (int n = 0; n < 3; n++){
        arr[n] = count;
        count = count + 0.1;
      }
    return arr;
   }

int main(int argc, char **argv)
{
  float *myarray;
    myarray=myfunc();
    for (int n = 0; n < 3; n++){
      cout << myarray[n]<<" ";
    }


    return 0;
}
