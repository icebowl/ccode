#include <stdio.h>
#include <iostream> // c++
using namespace std; // c++ namespace
int** create2DArray(unsigned height, unsigned width)
{
     int** array2D = 0;
     array2D = new int*[height];

     for (int h = 0; h < height; h++)
     {
          array2D[h] = new int[width];

          for (int w = 0; w < width; w++)
          {
               // fill in some initial values
               // (filling in zeros would be more logic, but this is just for the example)
               array2D[h][w] = w + width * h;
          }
     }

     return array2D;
}

int main ()
{

    printf("Creating a 2D array2D\n");
    printf("\n");

    int height = 15;
    int width = 10;
    int** my2DArray = create2DArray(height, width);
    printf("Array sized [%i,%i] created.\n\n", height, width);

    // print contents of the array2D
    printf("Array contents: \n");

    for (int h = 0; h < height; h++)
    {
         for (int w = 0; w < width; w++)
         {
              printf("%i,", my2DArray[h][w]);
         }
         printf("\n");
    }

    return 0;
}
