#include<stdio.h>
void main()
{
    int i,j,k,l=4;
    for(i=1;i<=5;i++)
    {
        k=l;
        for(j=1;j<=i;j++)
        {
            while(k>0)
            {
                printf(" ");
                k--;
            }
            printf("*");
        }
        printf("\n");
        l--;
    }
}