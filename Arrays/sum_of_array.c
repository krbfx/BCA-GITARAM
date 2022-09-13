#include<stdio.h>
#include<conio.h>
void main()
{
    int matrix[50][50],i,j,c,sum=0,n,choice;
    printf("Programme to calculate sum of the diagonals of a matrix.\n");
    printf("Enter the value of n for a NxN matrix.\n");
    scanf("%d",&n);
    printf("Enter matrix element\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Your Inputed Matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("Press '1' for sum of left diagonals.\nPress '2' for right diagonals.\n");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1: 
                    for(i=0;i<n;i++)
                    {
                        sum += matrix[i][i];
                    }
                    printf("Sum of Left diagonals are %d.",sum);
                    break;
        case 2:
                    c=(n-1);
                    for(i=0;i<n;i++)
                    {
                        for(j=0;j<1;j++)
                        {
                            sum += matrix[i][c];
                            c--;
                        }
                    }
                    printf("Sum of Right diagonals are %d.",sum);
                    break;
        default:    
                    printf("You have entered wrong a choice,please restart the programme.");
    }
    getch();

}