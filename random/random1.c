#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define randnum(min, max) \
        ((rand() % (int)(((max) + 1) - (min))) + (min))

int main()
{
    srand(time(NULL));

    printf("%d\n", randnum(1, 3));
}
