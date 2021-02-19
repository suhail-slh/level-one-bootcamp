//WAP to find the distance between two points using structures and 4 functions.
#include <stdio.h>
#include <math.h>
struct point{	double x,y;	};
void get_coordinates(struct point *p1, struct point *p2)
{
    printf("Enter the coordinates x_1,y_1,x_2,y_2: ");
    scanf("%lf%lf%lf%lf",&p1->x,&p1->y,&p2->x,&p2->y);
}
double find_dist(struct point p1, struct point p2)
{
    double distance = sqrt( pow(p2.x-p1.x,2) +  pow(p2.y-p1.y,2) );
    return distance;
}
void display_dist(struct point p1, struct point p2)
{
    double distance = find_dist(p1, p2);
    printf("Distance: %lf\n",distance);
}
int main()
{
    struct point p1, p2;
    get_coordinates(&p1, &p2);
    display_dist(p1, p2);
    return 0;
}
