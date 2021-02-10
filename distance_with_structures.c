//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include <math.h>
struct point{	double x,y;	}p1,p2;
double distance;
void get_params()
{
	printf(“Enter the coordinates x_1,y_1,x_2,y_2: ”);
	scanf(“%lf%lf%lf%lf”,&p1.x,&p1.y,&p2.x,&p2.y);
}
void find_dist()
{
  distance = sqrt( pow(p2.x-p1.x,2) +  pow(p2.y-p1.y,2) );
}
void display_dist()
{
	printf(“Distance: %lf\n”,distance);
}
int main()
{
	get_params();
	find_dist();
	display_dist();
	return 0;
}
