#include <stdio.h>
#include <string.h>

int main()
{
	char str[1300];
	while(fgets(str,1300,stdin))
	{
		int sum = 0;
		int i = 0;
		if(str[0] == '0')
		{
			break;	
		} 
		for(i=0; i<strlen(str)-1;i++)
		{
			sum += str[i] - '0';
		}
		printf("%d\n",sum);
	}
	return 0;
}

