#include<stdio.h>
#include<conio.h>
void main()
{
    int list[50],limit,i,j,temp;
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
    for(i=0;i<limit-1;i++)
    {
        for(j=i+1;j<limit;j++)
        {
            if(list[i]>list[j])
            {
                temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
        }
    }

    printf("\nAfter sorting your inputs:\n");
    for(i=0;i<limit;i++)
    {
        printf("%d ",list[i]);
    }
}