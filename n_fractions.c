//WAP to find the sum of n fractions.
#include <stdio.h>
#define MAX_SIZE 1000
struct fraction{ int num,den; };
void get_fracs(struct fraction f[], int *n)
{
    printf("Enter the size of the array: ");
    scanf("%d",n);
    printf("Enter the numerators, denominators of the fractions:  ");
    for(int i=0;i<(*n);i++)	
        scanf("%d%d",&f[i].num,&f[i].den);
}
int get_lcm(int a, int b)
{
    int c, mul;
    c = a>b ? a : b;
    mul = c;
    while(mul%a || mul%b)
        mul+=c;
    return mul;
}
int get_gcd(int a, int b)
{
    int temp;
    while(a!=0)
    {
        temp=a;
        a=b%a;
        b=temp;
    }
    return b;
}
struct fraction find_sum(struct fraction f[], int n)
{	
    int i, gcd;
    struct fraction sum;
    if(n)
        sum.den = f[0].den;
    for(i=1;i<n;i++)
        sum.den = get_lcm(sum.den, f[i].den);
    sum.num = 0;
    for(i=0;i<n;i++)
        sum.num += (f[i].num * (sum.den/f[i].den));
    gcd = get_gcd(sum.num, sum.den);
    sum.num /= gcd;
    sum.den /= gcd;
    return sum;
}
void display_sum(struct fraction *f, int n)
{	
    struct fraction sum = find_sum(f, n);
    for(int i=0;i<n;i++)
    {
        printf("%d/%d ",f[i].num,f[i].den);
        if(i<n-1)
           printf(" + ");
    }
    printf(" = %d/%d\n", sum.num, sum.den);	
}
int main()
{
    int n;
    struct fraction f[MAX_SIZE];
    get_fracs(f, &n);
    display_sum(f, n);
    return 0;
}
