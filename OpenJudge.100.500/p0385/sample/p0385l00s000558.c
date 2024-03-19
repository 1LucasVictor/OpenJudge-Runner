#include <stdio.h>
#include <string.h>

int main(void) {
	char c[5], end[5];
	int i, j, n, sum;
	scanf("%s", c);
	strcpy(end, "0");
	while (strcmp(c, end)!=0)
	{
		sum=0;
		n=strlen(c);
		for (i=0; i<n; i++)
		{
			j=c[i]-'0';
			sum=sum+j;
		}
		printf("%d\n", sum);
		scanf("%s", c);
	}
	return 0;
}