//<string.h>strlen(sentence),strcmp(string1,string2)
//<ctype.h>tolower(char),toupper(char),isupper(char),islower(char),isdigit(char),isalpha(char)

#include<ctype.h>
#include<stdio.h>
#include<string.h>
int main()
{
    char characterA='a';
    printf("%c",toupper(characterA));
    if(isalpha(characterA))
        printf("Yes %c is an alphabet.\n",characterA);
}
