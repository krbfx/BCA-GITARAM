#include<stdio.h>
void main()
{
    int a,n=6,i,j;
    printf("--Program to Multiplication Table From 1 to 6--\n");
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=11;j++)
        {
            printf("%d X %d = %d \n",i,j,i*j);
        }
        printf("\n");
    }

}