//WAP to find the sum of two fractions.
#include <stdio.h>
struct fraction{ int num,den; }f1,f2;
double sum;
void get_params()
{
	printf("Enter the numerator & denominator of the first fraction:	 ");
	scanf("%d%d",&f1.num,&f1.den);
	printf("Enter the numerator & denominator of the second fraction:	 ");
	scanf("%d%d",&f2.num,&f2.den);
}
void find_sum()
{	sum = ((double)f1.num/f1.den) + ((double)f2.num/f2.den);	}
int get_gcd(int a, int b)
{
	if(a==0)	return b;
	return get_gcd(b%a, a);
}
void display_sum()
{	
	int num, den, x;
	sum *= 100;
	x = get_gcd(sum, 100);
	num = sum/x;
	den = 100/x;
    	printf("%d/%d + %d/%d = %d/%d\n",f1.num,f1.den,f2.num,f2.den,num,den);	
}
int main()
{
	get_params();
	find_sum();
	display_sum();
	return 0;
}
