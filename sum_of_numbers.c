//Write a program to find the sum of n different numbers using 4 functions
#include <stdio.h>
#define MAX_SIZE 1000
void get_nums(int a[], int *n)
{
    printf("Enter the size of the array: ");
    scanf("%d",n);
    printf("Enter the elements of the array:  ");
    for(int i=0;i<(*n);i++)	
        scanf("%d",&a[i]);
}
int add_up(int a[], int n)
{	
    int sum = 0;
    for(int i=0;i<n;i++)		
        sum += a[i];
    return sum;
}
void display_sum(int a[], int n)
{	
    int sum = add_up(a, n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
        if(i<n-1)
            printf("+ ");
    }
    printf("= %d\n",sum);	
}
int main()
{
    int a[MAX_SIZE], n;
    get_nums(a, &n);
    display_sum(a, n);
    return 0;
}
