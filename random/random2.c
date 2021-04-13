#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int lowerLimit = 1, upperLimit = 4;
    int c = 0, r = 0;
    while (c < 100){
		r =  lowerLimit + rand() % (upperLimit - lowerLimit);
		printf("%d", r);
		c++;
	}
}
