//WAP to find super number or not
#include<stdio.h>
void main()
{
    int num,i=1,rem,sum=0;
    printf("Programme to find super number or not\n");
    printf("Enter a number\n");
    scanf("%d",&num);
    while(i<=num/2)
    {   rem = num%i;
        if(rem==0)
        {
            sum+=i;
        }
        i++;
    }
    if(sum==num)
    {
        printf("%d is a super number",num);
    }
    else
    {
        printf("%d is not a super number",num);
    }
}