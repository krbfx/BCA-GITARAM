#include<stdio.h>
#include<math.h>
void main()
{
    int r,n,i,sum=0;
    printf("--Programme to convert decimal numver to binary--\n");
    printf("Enter a decimal number");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
      r = n%2;
      sum += (r * pow(10,i));
      n=n/2;  
    }
    printf("Binary number = %d",sum);
}