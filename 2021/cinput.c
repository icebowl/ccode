// cinput.c  compile gcc cinput.c -o cinput.o
#include <stdio.h>

int main(){
	char str [16];
	int i;
	
	printf("Enter your first name : ");
	scanf("%15s",str);
	printf("Enter a hexadecimal number: ");
	scanf("%x",&i);
	printf("Hexadecimal %#x (%d). \n",i,i);
}
