//Write a program to find the volume of a tromboloid using one function
#include <stdio.h>
int main()
{
	double h,d,b,vol;
	printf(“Enter h,d,b values: ”);
	scanf(“%lf%lf%lf”,&h,&d,&b);
	vol = ((h*d*b)+(d/b))/3;
	printf(“Volume: %lf\n”,vol);

	return 0;
}
