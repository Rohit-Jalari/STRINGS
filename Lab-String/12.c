#include <stdio.h>

int main()
{
	int i;
    char string[200]={};
    printf("Enter a string: ");
    gets(string);
    for(i=0;i<200;i++){
        if((string[i]>=65 && string[i]<=90)){
            printf("%c",string[i]+32);
        }else if((string[i]>=97 && string[i]<=122)){
             printf("%c",string[i]-32);
        }else{
            printf("%c",string[i]);
        }
    }
    printf("\n");
    return 0;
}
