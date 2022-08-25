// WAP to find the result of seris 
// s = 1+(1+2)+(1+2+3)+...+(1+2+3...+n)

#include<stdio.h>
void main()
{
    int n,i,j,s=0,x=0;
    printf("Program to find the result of 1+(1+2)+(1+2+3)+...+(1+2+3...+n)\n");
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        x=0;
        for(j=1;j<=i;j++)
            x += j;
        s += x;
    }
    printf("S = %d",s);
}