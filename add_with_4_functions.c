//Write a program to add two user input numbers using 4 functions.
#include <stdio.h>
int a,b,sum;
void get_nums()
{
	printf(“Enter two numbers: ”);
	scanf(“%d%d”,&a,&b);
}
void add_nums()
{
  sum=a+b;
}
void display_sum()
{
	printf(“Sum: %d\n”,sum);
}
int main()
{
	get_nums();
	add_nums();
	display_sum();

	return 0;
}
