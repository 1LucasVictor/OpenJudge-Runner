#include<stdio.h>
#include<string.h>

int main()
{
	char str[1000];
	int length,i;
	
	while(scanf("%s",str)!=EOF)
	{
		if(str[0]=='0')break;
		else
		{
			int sum=0;
			length=strlen(str);
			for(i=0;i<length;i++)sum+=str[i]-'0';
			printf("%d\n",sum);
		}

	}

	return 0;
}