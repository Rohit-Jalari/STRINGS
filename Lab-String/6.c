#include<stdio.h>
#include<string.h>

int main()
{
    char string1[100],string2[100];
    int value;

    printf("Enter first word :");
    gets(string1);
    printf("Enter second word :");
    gets(string2);

    value=strcmp(string1,string2);
    if(value==-1)
        {
          printf("%s comes before %s in aplhabetical order.\n",string1,string2);
        }
    else if(value==1)
    {
        printf("%s comes before %s in aplhabetical order.\n",string2,string1);
    }
    else
        {
            printf("%s and %s are same words",string1,string2 );
        }
}
