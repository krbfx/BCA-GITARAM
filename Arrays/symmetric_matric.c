#include <stdio.h>
#include <conio.h>
void main()

{
    int matrix[3][3], i, tmatrix[3][3], j, flag=0;
    printf("Programme to check symmetric matrix\n");
    printf("Enter numbers for a 3x3 matrix\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("You entered matrix is \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            tmatrix[i][j] = matrix[j][i];
        }
    }

    printf("Transpose of the matrix is \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", tmatrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (tmatrix[i][j] == matrix[i][j])
            {
                flag++;
            }
        }
    }
    if (flag == 9)
    {
        printf("Your matrix is a symmetric matrix");
    }
    else
    {
        printf("Your matrix is not a symmetric matrix");
    }
    getch();
}