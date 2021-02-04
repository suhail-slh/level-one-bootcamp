//WAP to find the volume of a tromboloid using 4 functions.
#include <stdio.h>
double h,d,b,vol;
void get_params()
{
	printf("Enter h,d,b values: ");
	scanf("%lf%lf%lf",&h,&d,&b);
}
void find_vol()
{
	vol = ((h*d*b)+(d/b))/3;
}
void display_vol()
{
	printf("Volume: %lf\n",vol);
}
int main()
{
	get_params();
	find_vol();
	display_vol();

	return 0;
}
