#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int length;

     printf("Enter a word :");
     gets(string);

     length=strlen(string);

     for (int i=length;i>=0;i--)
     {
         printf("%c\n",string[i]);
     }
}
