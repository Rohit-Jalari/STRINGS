#include<stdio.h>
#include<string.h>

int main()
{   char sentence[100];
    int length=0,vowel=0,consonant=0;

    printf("Enter a sentence :");
    gets(sentence);

    length=strlen(sentence);

    for (int i=0;i<length;i++)
    {

            {
            if(sentence[i]=='a' || sentence[i]=='e' || sentence[i]=='i'
            || sentence[i]=='o' || sentence[i]=='u' || sentence[i]=='A'
            || sentence[i]=='E' || sentence[i]=='I' || sentence[i]=='O'
            || sentence[i]=='U')
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
            }
   }
   printf("Total number of vowel letters is %d\n",vowel);
    printf("Total number of consonant letters is %d",consonant);
}
