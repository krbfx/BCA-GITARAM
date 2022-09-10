// WAP to find the result of
// s = 1-2+3-4+5-...n
#include<stdio.h>
void main()
{
    int n,j,s=0;
    printf("--Program to find out the result of s = 1-2+3-4+5-...n--\n");
    printf("Enter a number\n");
    scanf("%d",&n);

    for(j=1;j<=n;j++)
    {
        if(j%2==1)
            s += j;
        else
            s -= j;
    }
    printf("s = %d",s);
}