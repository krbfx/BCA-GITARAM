#include<stdio.h>
#include<conio.h>
main()
{ int n,i,a=0,b=1,c;
 printf("Enter any number to find out fivonake cerise:-\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 printf("\n%d",a);
 c=a+b;
 a=b;
 b=c;
 }
 }