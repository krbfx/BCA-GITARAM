//Programme to count a charecter in string
#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char letter,sen[100];
    int count,i=0;

    printf("Programme to count a letter in a string\n");
    printf("-----------------------------------------\n");
    printf("\nEnter your string\n");
    gets(sen);
    printf("Which letter you want to count?\n");
    scanf("%c",&letter);
    while(sen[i]!='\0')
    {
        if(sen[i]==letter)
        {
            count++;
        }
        i++;
    }
    printf("%c is appeard %d times in your string",letter,count);

}