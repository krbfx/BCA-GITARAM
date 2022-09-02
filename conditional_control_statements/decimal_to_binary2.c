#include <stdio.h>
#include <stdlib.h>
void main()
{
    int q = 1, n, p, i = 0, sum = 0;
    system("cls");
    printf("--Programme to convert decimal numver to binary--\n");
    printf("Enter a decimal number \n");
    scanf("%d", &n);
    while (n > 0)
    {
        p = n % 2;
        sum += (p * q);
        n /= 2;
        q *= 10;
        i++;
    }
    printf("Binary number = %d", sum);
}