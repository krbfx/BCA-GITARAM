#include<stdio.h>
#include<conio.h>

void main()
{
    int list1[50],list2[50];
    int i,j=0,count,limit1,limit2;
    printf("Program to concatenate two strings\n");
    printf("How many elements you want in first array?\n");
    scanf("%d",&limit1);

    printf("How many elements you want in second array?\n");
    scanf("%d",&limit2);

    printf("Enter First elements\n");
    for(i=0;i<limit1;i++)
    {
        scanf("%d",&list1[i]);
    }

    printf("Enter Second elements\n");
    for(i=0;i<limit2;i++)
    {
        scanf("%d",&list2[i]);
    }

    printf("Your first array elements\n");
    for(i=0;i<limit1;i++)
    {
        printf("%d\n",list1[i]);
    }
    printf("Your second array elements\n");
    for(i=0;i<limit2;i++)
    {
        printf("%d\n",list2[i]);
    }

    for(i=limit1;i<limit1+limit2;i++)
    {
        list1[i]=list2[j];
        j++;
    }

    printf("After concatenate your list is\n");
    for(i=0;i<limit1+limit2;i++)
    {
        printf("%d\n",list1[i]);
    }
    getch();
}   