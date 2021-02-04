//Write the program to print "Hello World !"
#include <stdio.h>
#define MAX_SIZE 100
void main()
{
	char name[MAX_SIZE];
	printf(“Enter your name: ”);
	scanf(“%s”,name);
	printf(“Your name: %s\n”,name);
}
