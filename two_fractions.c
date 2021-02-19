//WAP to find the sum of two fractions.
#include <stdio.h>
struct fraction{ int num,den; };
void get_fracs(struct fraction *f1, struct fraction *f2)
{
    printf("Enter the numerator & denominator of the first fraction:	 ");
    scanf("%d%d",&f1->num,&f1->den);
    printf("Enter the numerator & denominator of the second fraction:	 ");
    scanf("%d%d",&f2->num,&f2->den);
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
struct fraction find_sum(struct fraction f1, struct fraction f2)
{	
    int gcd;
    struct fraction sum;
    sum.den = get_lcm(f1.den, f2.den);
    sum.num = (f1.num * (sum.den/f1.den)) + (f2.num * (sum.den/f2.den));
    gcd = get_gcd(sum.num, sum.den);
    sum.num /= gcd;
    sum.den /= gcd;
    return sum;
}
void display_sum(struct fraction f1, struct fraction f2)
{	
    struct fraction sum = find_sum(f1, f2);
    printf("%d/%d + %d/%d = %d/%d\n",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);	
}
int main()
{
    struct fraction f1, f2;
    get_fracs(&f1, &f2);
    display_sum(f1, f2);
    return 0;
}
