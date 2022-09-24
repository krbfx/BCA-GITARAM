//Programme to count vowel and consonat and print them
#include<stdio.h>
#include<string.h>
void main()
{
    char sent[100],vowel[5]={'a','e','i','o','u','A','E','I','O','U'},conson[100];
    int i=0,j=0,vcount=0,ccount=0,scount=0;

    printf("Programme to find vowel and consonant in string\n");
    printf("-------------------------------------------------\n");
    printf("Enter your sentence\n");
    gets(sent);

    while(sent[i]!='\0')
    {
        while(vowel[j]!='\0')
        {
            if(sent[i]==vowel[j])
            {
                vcount++;
            }
            else
            {
        }        
    }

}