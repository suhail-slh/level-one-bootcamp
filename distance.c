//WAP to find the distance between two point using 4 functions.
#include <stdio.h>
#include <math.h>
void get_coordinates(double *x_1, double *y_1, double *x_2, double *y_2)
{
    printf("Enter the coordinates x_1,y_1,x_2,y_2: ");
    scanf("%lf%lf%lf%lf",x_1,y_1,x_2,y_2);
}
double find_dist(double x_1, double y_1, double x_2, double y_2)
{
    double distance = sqrt( pow(x_2-x_1,2) + pow(y_2-y_1,2) );
    return distance;
}
void display_dist(double x_1, double y_1, double x_2, double y_2)
{
    double distance = find_dist(x_1, y_1, x_2, y_2);
    printf("Distance: %lf\n",distance);
}
int main()
{
    double x_1,y_1,x_2,y_2;
    get_coordinates(&x_1, &y_1, &x_2, &y_2);
    display_dist(x_1, y_1, x_2, y_2);
    return 0;
}
