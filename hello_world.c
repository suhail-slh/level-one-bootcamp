//Write the program to print "Hello World !"
#include <stdio.h>
#define MAX_SIZE 100
int main()
{
	char name[MAX_SIZE];
	printf("Enter your name: ");
	scanf("%s",name);
	printf("Your name: %s\n",name);
	return 0;
}
