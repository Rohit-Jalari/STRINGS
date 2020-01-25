#include<stdio.h>
#include<string.h>

int main()
{   char sentence[100];
    int length,vowel=0,consonant=0;

    printf("Enter a sentence :");
    gets("sentence");

    length=strlen(sentence);

    for (int i=0;i<length;i++)
    {
        if(sentence[i]=='a' || sentence[i]=='e' || sentence[i]=='i' || sentence[i]=='o' || sentence[i]=='u')
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
    }
}
