#include <stdio.h>
#include <iostream>
#include <array>
using namespace std;

void buildArray(float color[4][3]){
    float color256[256][3] = {};
    int n;
    float sr,sg,sb,er,eg,eb,ir,ig,ib;
    sr = color[0][0];sg = color[0][1];sb = color[0][2];
    er = color[1][0];eg = color[1][1];eb = color[1][2];
    ir = (er-sr)/8;ig = (eg-sg)/8; ib = (eb-sb)/8;
    cout<<"increments "<<ir<<" "<<ig<<" "<<ib<<endl;
    color256[0][0] = color [0][0];
    color256[0][1] = color[0][1];
    color256[0][2] = color[0][2];
    cout<<"start "<<color256[0][0]<<" "<<color256[0][1]<<" "<<color256[0][2]<<endl;
    for (n = 0; n < 8; n ++){
      color256[n+1][0] = color256[n][0] + ir;
      color256[n+1][1] = color256[n][1] + ig;
      color256[n+1][2] = color256[n][2] + ib;
      cout << color256[n][0]<<" "<<color256[n][1]<<" "<<color256[n][2]<<endl;
    }
    for (n =0;n < 8 ; n++){
      cout << color256[n][0]<<" "<<color256[n][1]<<" "<<color256[n][2]<<endl;
    }

}

void arrayStart(){
  array<array<float,4>,3> color;
  /* {
        {  0.0 , 0.1686 , 0.2117 },
      {   0.0274 , 0.2117 , 0.2588},
      {   0.3450 , 0.4313 , 0.4588},
      {   0.3960 , 0.4823, 0.5137}
  };
  */
//  float c256 = color buildArray(color);
  //buildArray(color);
//  for (int i =0 ;i < 8 ; i++)
//    cout << c256[i][0];
}

int main(int argc, char **argv)
{
    arrayStart();
    return 0;
}
