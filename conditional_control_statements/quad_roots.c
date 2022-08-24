#include <stdio.h>
#include <math.h>
void main()
{
    double a, b, c,disc, x, y,img;
    printf("--program to find roots of a quadretic equation--\n");
    printf("Enter a,b and c of ax^2 + bx +c \n");
    scanf("%lf%lf%lf", &a, &b, &c);
    disc = (pow(b, 2) - (4 * a * c));
    if (disc > 0)
    {
        x = (-b + sqrt(disc)) / (2 * a);
        y = (-b - sqrt(disc)) / (2 * a);
        printf("The roots are real and are %2.2lf,%2.2lf", x, y);
    }
    else if (disc < 0)
    {
        x= -b/(2*a);
        img = sqrt(-disc) / (2 * a);
        printf("The roots are imaginary and are %2.2lf+%.2lfi,%2.2lf-%.2lfi", x,img,x,img);
    }
    else
    {
        x = -b / (2 * a);
        printf("Roots are equal and are %2.2lf", x);
    }
}