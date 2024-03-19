#include <stdio.h>

int main()
{
	char a[1001];
	int sum = 0;
	int i;
	int num[1001];
	
	
	while(1)
	{
		scanf("%s",a);
		if(a[0] == '0') break;
		
		for(i = 0; i < 1000; i++)
		{
			if(a[i] == '\0') break;
			num[i] = a[i] - '0';
			sum += num[i];
		}
		
		printf("%d\n",sum);
		sum = 0;
	}
	
	return 0;
}