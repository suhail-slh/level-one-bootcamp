//WAP to find the sum of n fractions.
#include <stdio.h>
struct fraction{ double num,den; };
void get_nums(struct fraction *f, int n)
{
	printf("Enter the numerators, denominators of the fractions:  ");
	for(int i=0;i<n;i++)	scanf("%lf%lf",&f[i].num,&f[i].den);
}
double add_up(struct fraction *f, int n)
{	
	double sum = 0;
	for(int i=0;i<n;i++)		sum += (f[i].num/f[i].den);
	return sum;
}
void display_sum(double sum)
{	printf("Sum: %lf\n",sum);	}
int main()
{
	int n;	
	double sum;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	struct fraction f[n];
	get_nums(f, n);
	sum=add_up(f, n);
	display_sum(sum);
	return 0;
}
