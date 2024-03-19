#include<stdio.h>
#include<string.h>

int main(void)
{
	char ch;
	int sum;
	scanf("%c", &ch);

	while(ch != '0')			//判断首数字
	{
		sum = 0;
		sum += ch - '0';
		scanf("%c", &ch);
		while(ch != '\n')
		{
			sum += ch - '0';
			scanf("%c", &ch);
		}
		printf("%d\n", sum);
		scanf("%c", &ch);
		
	}
	return 0;
}
