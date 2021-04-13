#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  
// Generates and prints 'count' random
// numbers in range [lower, upper].
int getRandom(int lower, int upper){
        int rInt = (rand() %  (upper - lower + 1)) + lower;
        return rInt;
	}
  
// Driver code
int main()
{
    int lower = 1, upper = 3, count = 1;
    // Use current time as seed for random generator
    srand(time(0));
	int rInt = getRandom(lower,upper); 
	printf("%d ",rInt);
  
    return 0;
}

