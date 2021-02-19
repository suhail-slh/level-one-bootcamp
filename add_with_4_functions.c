//Write a program to add two user input numbers using 4 functions.
#include <stdio.h>
void get_nums(int *a, int *b)
{
    printf("Enter two numbers: ");
    scanf("%d%d",a,b);
}
int add_nums(int a, int b)
{
    return a+b;
}
void display_sum(int a, int b)
{
    int sum = add_nums(a,b);
    printf("Sum: %d\n",sum);
}
int main()
{
    int a, b;
    get_nums(&a, &b);
    display_sum(a,b);
    return 0;
}
