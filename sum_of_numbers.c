//Write a program to find the sum of n different numbers using 4 functions
#include <stdio.h>
void get_params(int *a, int n)
{
	printf(“Enter the elements of the array:  ”);
	for(int i=0;i<n;i++)	scanf(“%d”,&a[i]);
}
int add_up(int *a, int n)
{	
  int sum = 0;
  for(i=0;i<n;i++)		sum += a[i];
  return sum;
}
void display_sum(int sum)
{	printf(“Sum: %d\n”,sum);	}
int main()
{
	int n, sum;
	printf(“Enter the size of the array: ”);
	scanf(“%d”,&n);
	int a[n];
	get_nums(a, n);
	sum=add_up(a, n);
	display_sum(sum);
	return 0;
}
