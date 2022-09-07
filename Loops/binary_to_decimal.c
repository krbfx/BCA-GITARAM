#include <stdio.h>
#include <math.h>
void main()
{
    int n, i, sum = 0, p = 0;
    printf("--Programme to convert binary to decimal-- \n");
    printf("Enter a binary number:- ");
    scanf("%d", &n);
    for (i = 0; n != 0; i++)
    {
        p = n % 10;
        sum += (p * pow(2, i));
        n = n / 10;
    }
    printf("Decimal = %d", sum);
}