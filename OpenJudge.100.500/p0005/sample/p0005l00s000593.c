//1521159
//AOJ0006

#include<stdio.h>
#include<string.h>

#define MAX 1000

int main()
{
	int i,len;
	char str[MAX];
	while (1)
	{
		scanf("%s", &str);
		len = strlen(str);
		if (0 <= len && len <= 20){
			break;
		}
	}

	for (i=len-1; i >= 0; i--){
		printf("%c", str[i]);
	}
	printf("\n");
	return 0;
}