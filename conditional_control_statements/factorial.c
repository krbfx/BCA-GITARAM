#include<stdio.h>
void main()
{
    int a,i,factorial=1;
    printf("--program to find factorial of a number\n");
    printf("Enter a number\n");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        factorial *= i;
    }
    printf("The ans is = %d",factorial);

}