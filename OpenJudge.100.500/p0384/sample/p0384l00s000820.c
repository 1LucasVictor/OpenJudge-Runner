#include <stdio.h>
#include <string.h>
 
int main()
{
  	char Str1[1300];
  	int i = 0; 
  	while(fgets(Str1, 1300, stdin))
  	{
  		for(i=0;i<strlen(Str1);i++)
  		if(Str1[i] >= 'a' && Str1[i] <= 'z')
  		{
  			Str1[i] -= 32;
		}	
  		else if(Str1[i] >= 'A' && Str1[i] <= 'Z')
  		{
  			Str1[i] += 32;
		}
		printf("%s", Str1);	
  	}
  	return 0;
}
