#include<stdio.h>
#include<string.h>

int main()
{

    char string[100];
    int length;

    printf("Enter a sentence :");
    gets(string);
    length=strlen(string);
    for (int i=0;i<length;i++)
    {
        printf("%c",string[i]);
        printf("\t");
    }
}
