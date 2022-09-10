#include<stdio.h>
#include<conio.h>
void main()

{
    int matrix[2][3],i,j;
    printf("Enter numbers\n");
    for(j=0;j<3;j++)
    {
        for(i=0;i<2;i++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("Your matrix is\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    getch();
}