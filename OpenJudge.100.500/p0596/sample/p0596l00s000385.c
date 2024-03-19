#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	int i=0;
	int length=0;
	int count1=0;
	int count2=0;
//	char str[256];

	char *str;
	
	str = (char *)malloc(100000+1);
	
	if (str == NULL) {
		return -1;
	}
	 
	
	scanf("%s", str);
	length=strlen(str);
	
	for(i=0;i<length;i++)
	{
		if(str[i]=='1')
		{
			count1++;
		}
		else
		{
			count2++;
		}
	}
	
	if(count1>count2)
	{
		printf("%d\n",count2*2);
	}
	else
	{
		printf("%d\n",count1*2);
	}
	return 0;
}