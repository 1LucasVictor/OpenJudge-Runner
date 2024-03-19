#include<stdio.h>
#include<string.h>

int main (void)
{
	char s[1000];
	int i;
	int sum;
	
	
	for(i = 0 ; i < 1000 ; i++)
	{
		s[i] = '\0';
	}
	
	while(1)
	{
		sum = 0;
		i = 0;
		scanf("%s",s);
		if(strcmp(s,"0")==0)
		{
			break;
		}
		while(s[i] != '\0')
		{
			sum = sum + s[i] - '0';
			i++;
		}
		printf("%d\n",sum);
	}
	
	return 0;
}
