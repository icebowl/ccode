/*
Lets go through this. First we use the srand() function to seed the randomizer.
 Basically, the computer can generate random numbers based on the number that is fed to srand(). 
 If you gave the same seed value, then the same random numbers would be generated every time.

Therefore, we have to seed the randomizer with a value that is always changing.
 We do this by feeding it the value of the current time with the time() function.

Now, when we call rand(), a new random number will be produced every time.
*/

    #include <stdio.h>

    int random_number(int min_num, int max_num);

    int main(void)
    {
        printf("Min : 1 Max : 40 %d\n", random_number(1,40));
        printf("Min : 100 Max : 1000 %d\n",random_number(100,1000));
        return 0;
    }

    int random_number(int min_num, int max_num)
    {
        int result = 0, low_num = 0, hi_num = 0;

        if (min_num < max_num)
        {
            low_num = min_num;
            hi_num = max_num + 1; // include max_num in output
        } else {
            low_num = max_num + 1; // include max_num in output
            hi_num = min_num;
        }

        srand(time(NULL));
        result = (rand() % (hi_num - low_num)) + low_num;
        return result;
    }
