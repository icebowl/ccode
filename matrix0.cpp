#include <cstdlib>
#include <cstdio>

int** get_matrix(int row, int col){
   int** matrix = new int*[10];
   for (int i = 0; i < row; ++i){
       matrix[i] = new int[col];
   }
   return matrix;
}

int main(){
   matrix = get_matrix(10,10);
   //code
   //code
   //and more code
   return 0;
}
