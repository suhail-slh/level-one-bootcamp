//WAP to find the volume of a tromboloid using 4 functions.
#include <stdio.h>
void get_params(double *h, double *d, double *b)
{
    printf("Enter h,d,b values: ");
    scanf("%lf%lf%lf",h,d,b);
}
double find_vol(double h, double d, double b)
{
    double vol = ((h*d*b)+(d/b))/3;
    return vol;
}
void display_vol(double h, double d, double b)
{
    double vol = find_vol(h, d, b);
    printf("Volume: %lf\n",vol);
}
int main()
{
    double h,d,b;
    get_params(&h, &d, &b);
    display_vol(h, d, b);
    return 0;
}
