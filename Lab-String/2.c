#include<stdio.h>
#include<string.h>
int main()
{
    char string[10];
    int length ;
    printf("Enter the name :");
    gets(string);

    length=strlen(string);

    printf("The number of letters is the  %d",length);

}
