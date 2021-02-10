//WAP to find the sum of two fractions.
#include <stdio.h>
#include <math.h>
struct point{	double num,den;	}f1,f2;
double sum;
void get_params()
{
	printf(“Enter the numerator & denominator of the first fraction:	 ”);
	scanf(“%lf%lf”,&f1.num,&f1.den);
	printf(“Enter the numerator & denominator of the second fraction:	 ”);
	scanf(“%lf%lf”,&f2.num,&f2.den);
}
void find_sum()
{	sum = (f1.num/f1.den) + (f2.num/f2.den);	}
void display_sum()
{	printf(“Sum: %lf\n”,sum);	}
int main()
{
	get_params();
	find_sum();
	display_sum();
	return 0;
}
