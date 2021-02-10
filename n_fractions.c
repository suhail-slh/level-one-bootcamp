//WAP to find the sum of n fractions.
#include <stdio.h>
struct fraction{ int num,den; };
void get_nums(struct fraction *f, int n)
{
	printf("Enter the numerators, denominators of the fractions:  ");
	for(int i=0;i<n;i++)	scanf("%d%d",&f[i].num,&f[i].den);
}
double add_up(struct fraction *f, int n)
{	
	double sum = 0;
	for(int i=0;i<n;i++)		sum += ((double)f[i].num/f[i].den);
	return sum;
}
int get_gcd(int a, int b)
{
	if(a==0)    return b;
	return get_gcd(b%a, a);
}
void display_sum(double sum)
{	
	int num, den, x;
	sum *= 100;
	x = get_gcd(sum, 100);
	num = sum/x;
	den = 100/x;
	printf("Sum: %d/%d\n",num,den);	
}
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
