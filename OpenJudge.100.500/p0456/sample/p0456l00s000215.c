#include <stdio.h>
#define MAX 20000
#include <string.h>
int main()
{
	char str1[MAX], str2[MAX];
	int count = 0, n = 0;
	
	fgets(str1,sizeof(str1),stdin);
	fgets(str2,sizeof(str2),stdin);
	
	for (int i = 0, n = strlen(str1); i < n; i++)
	{
		if (str1[i] != str2[i])
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}