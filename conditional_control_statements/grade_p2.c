#include <stdio.h>
#include <conio.h>
#include<time.h>
#include <stdlib.h>
#include <unistd.h> 
void main()
{
    int n, i, j, temp, total = 0, arr[6], percent;
    double time_spent = 0.0;
    clock_t begin = clock();


    //system("cls"); // clears the screen
    printf("--Programme for advanced grade--\n");
    printf("Enter the number of subjects\n");
    scanf("%d", &n);
    printf("Enter The numbers of %d subjects\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i = 1; i < n; i++)
    {
        total = total + arr[i];
    }
    percent = total / n - 1;
    if (percent > 40)
    {
        if (percent > 91 && percent <= 100)
            printf("The grade is E and Marks is %d", total);
        if (percent > 81 && percent <= 90)
            printf("The grade is A and Marks is %d", total);
        if (percent > 61 && percent <= 80)
            printf("The grade is B and Marks is %d", total);
        if (percent > 51 && percent <= 70)
            printf("The grade is C and Marks is %d", total);
        if (percent > 41 && percent <= 60)
            printf("The grade is D and Marks is %d", total);
    }
    else
        printf("--The student's mark %d and he is fail--", total);

sleep(3);
 
    clock_t end = clock();
 
    // calculate elapsed time by finding difference (end - begin) and
    // dividing the difference by CLOCKS_PER_SEC to convert to seconds
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
 
    printf("\n[The elapsed time is %f seconds]", time_spent);
    getch();
}
