#include<stdio.h>
#include<string.h>

int main()
{
    char string[100];
    int length,count=0;

    printf("Enter a sentence:");
    gets(string);

    length=strlen(string);

    for (int i=0;i<length;i++)
    {

        if(string[i]!=' ')
        {
          continue;
        }
        else {count++;}
    }
    printf("The total number of words is %d",count+1);
}
