
#include <stdio.h>
#include <string.h>

int main()
{
  	char string[100], result;
  	int i, length;
  	int max = 0;
  	int freq[256] = {0};

  	printf("\n enter any string :  ");
  	gets(string);

  	length = strlen(string);

  	for(i = 0; i < length; i++)
  	{
  		freq[string[i]]++;
	}

  	for(i = 0; i < 256; i++)
  	{
		if(freq[i] > freq[max])
		{
			max = i;
		}
	}
	printf("\n Character '%c' appears maximum of %d times in a given string :  %s ", max, freq[max], string);

  	return 0;
}

