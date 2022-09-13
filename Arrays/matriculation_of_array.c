#include<stdio.h>
#include<conio.h>
void main()
{
    int matrix1[50][50],matrix2[50][50],result[50][50],row1,col1,row2,col2,i,j,k;

    printf("programme to find Multiplication of matrix\n");
    printf("Enter row and column for 1st matrix\n");
    
    printf("Row: ");
    scanf("%d",&row1);
    printf("Column: ");
    scanf("%d",&col1);
    
    printf("Enter row and column for 2nd matrix\n");
    
    printf("Row: ");
    scanf("%d",&row2);
    printf("Column: ");
    scanf("%d",&col2);
    
    if(col1==row2)
    {
        printf("Enter the elements of first matrix:\n");
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col1;j++)
            {
                scanf("%d",&matrix1[i][j]);
            }
        }
        printf("Enter the elements of Second matrix:\n");
        for(i=0;i<row2;i++)
        {
            for(j=0;j<col2;j++)
            {
                scanf("%d",&matrix2[i][j]);
            }
        }

        printf("Your first matrix is :\n");
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col1;j++)
            {
                printf("%d ",matrix1[i][j]);
            }
            printf("\n");
        }
        printf("Your second matrix is :\n");
        for(i=0;i<row2;i++)
        {
            for(j=0;j<col2;j++)
            {
                printf("%d ",matrix2[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                result[i][j]=0;
                for(k=0;k<row2;k++)
                {
                    result[i][j]+=matrix1[i][k]*matrix2[k][j];
                }
            }
        }
        printf("Your Result matrix is :\n");
        for(i=0;i<row1;i++)
        {
            for(j=0;j<col2;j++)
            {
                printf("%d ",result[i][j]);
            }
            printf("\n");
        }


    }
    else
    {
        printf("Multiplication of these matrix can't be done.\nFirst Matrix's Column must be equal to Second matrix's Row\n");
    }
    getch();
}

