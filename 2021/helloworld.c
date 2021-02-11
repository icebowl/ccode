// helloworld.c  compile : gcc helloworld.c -o helloworld.o
#include <stdio.h>
// main() function
int main() {  // main() function as integer
   // printf() is the same as print() in Python
   printf("\nHello World!");
   printf("***********\n");
   return 0;
}

/*
 compile: gcc helloworld.c -o helloworld.o
 run : ./helloworld.o
  
    The #include is a preprocessor command that tells 
    the compiler to include the contents of stdio.h 
    (standard input and output) file in the program.
    
    The stdio.h file contains functions such as 
    scanf() and printf() to take input and display output respectively.
    
    The return 0; statement is the "Exit status" of the program. 
    The program ends with this statement if it is a function 
    and not a void.
*/

