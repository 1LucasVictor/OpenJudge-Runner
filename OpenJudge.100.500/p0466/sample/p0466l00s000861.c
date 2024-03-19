#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
	char a[1000], b[1000];
	int i;
	scanf("%s%s", a, b);
	for (i = 0; i < strlen(a); i++)
	{
		if (a[i] != b[i])
		{
			printf("No");
			return 0;
		}
	}
	printf("Yes");
	return 0;
}