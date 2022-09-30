#include<stdio.h>
#include<conio.h>

void main()
{
    int array[50],i,j=0,count=0,loc[50],limit,key;
    
    printf("Program to search a number from list\n");
    printf("How many number you want to enter?\n");
    scanf("%d",&limit);
    printf("Enter numbers:\n");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Which number you want search?\n");
    scanf("%d",&key);
    for(i=0;i<limit;i++)
    {
        if(array[i]==key)
        {
            count++;
            loc[j]=i+1;
            j++;
        }
    }
    printf("%d is found %d times.In Position:",key,count);
    for(i=0;i<j;i++)
    {
        printf(" %d",loc[i]);
    }
    getch();
}
