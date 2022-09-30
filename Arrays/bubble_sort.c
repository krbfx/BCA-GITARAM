#include<stdio.h>
#include<conio.h>
void main()
{
    int list[50],limit,i,temp;
    printf("Program to sort an array using bubble sorting\n");
    printf("\nEnter how many numbers you want to input?\n");
    scanf("%d",&limit);
    printf("Enter your inputs:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&list[i]);
    }
    printf("\nBefore sorting your inputs:\n");
    for(i=0;i<limit;i++)
    {
        printf("%d ",list[i]);
    }
    for(i=0;i<limit;i++)
    {
        if(list[i]>list[i+1])
        {
            temp=list[i];
            list[i]=list[i+1];
            list[i+1]=temp;
        }
    }

    printf("\nAfter sorting your inputs:\n");
    for(i=0;i<limit;i++)
    {
        printf("%d ",list[i]);
    }
}