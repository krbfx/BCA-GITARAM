#include<stdio.h>
#include<stdlib.h>
void main()
{
    int p,n,i=0,sum=0,arr[11];
    system("cls");
    printf("--Programme to convert decimal numver to binary--\n");
    printf("Enter a decimal number \n");
    scanf("%d",&n);
    while(n>0)
    {
        arr[i]= n%2;
        n /= 2;
        i++;
    }
    i -= 1;
    printf("Binary number = ");
    while(i >=0)
    {
        printf("%d",arr[i]);
        i--;
    }
}