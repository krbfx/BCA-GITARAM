#include<stdio.h>
#include<conio.h>
void main()
{
    int x=0,y=1,z,range;
    printf("Programme to find fibonacci series\n");
    printf("Enter the range\n");
    scanf("%d",&range);

    do
    {
        printf("%d ",x);
        z=x+y;
        y=x;
        x=z;
    }while(x<=range);
}