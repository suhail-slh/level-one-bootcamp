//WAP to find the distance between two point using 4 functions.
#include <stdio.h>
#include <math.h>
double x_1,y_1,x_2,y_2,distance;
void get_params()
{
	printf("Enter the coordinates x_1,y_1,x_2,y_2: ");
	scanf("%lf%lf%lf%lf",&x_1,&y_1,&x_2,&y_2);
}
void find_dist()
{
	distance = sqrt( pow(x_2-x_1,2) + pow(y_2-y_1,2) );
}
void display_dist()
{
	printf("Distance: %lf\n",distance);
}
int main()
{
	get_params();
	find_dist();
	display_dist();

	return 0;
}
