
#include <stdio.h>

int main()
{
	int i;
    char string[200]={};
    int compare=0,length=0;
    printf("Enter a string: ");
    gets(string);
    for(i=0;i<=200;i++){
        if(string[i]!=0){
            length++;
        }
    }
    for(i=0;i<length;i++){
        if(string[i]>=65 && string[i]<=90){
        string[i]=string[i]+32;
        }
           if(string[i]=='t' && string[i+1]=='h' && string[i+2]=='e'){
               compare++;
        }
    }
    printf("'The' is present %d times in the given string.\n",compare);
    return 0;
}
