// squareroot.c
// gcc squareroot.c -lm
// gcc squareroot.c -o squareroot.o -lm

#include <stdio.h>
#include <math.h>
float squareroot (float a);

float main(){
	float a,s;
	
	printf("Type in a number \n");
	printf("After each input type the Enter key. \n");
	printf("Input a ");
	scanf("%f",&a);
	printf("The number you typed was %f\n",a);
	
	s = squareroot(a);
	
	printf("The square root of %f is %f.\n",a,s);
	
	return 0;
}

float squareroot(float a){
	float s = sqrt(a);
	return s;
}

