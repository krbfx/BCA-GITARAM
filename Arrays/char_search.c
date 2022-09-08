#include <stdio.h>
#include <conio.h>

void main()
{
    char array[50], ser;
    int limit, i, flag=0;

    printf("Programme to find charecters in an Array \n");
    printf("How many charecters you want to enter?\n");
    scanf("%d", &limit);

    printf("Enter your Charecters\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%c ", &array[i]);
    }
    printf("You have entered this charecters:\n");
    for (i = 0; i < limit; i++)
    {
        printf("%c\n", array[i]);
    }
    printf("Press enter to confirm...\n");
    getch();

    printf("Which charecter you want to search?\n");
    scanf("%c", &ser);

    for (i = 0; i < limit; i++)
    {
        if (array[i] == ser)
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        printf("%c is present", ser);
    }
    else
    {
        printf("%c is not present", ser);
    }
    getch();
}