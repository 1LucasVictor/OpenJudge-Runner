#include <stdio.h>
#include <string.h>
int main(void) {
	char card[400]={};
	scanf("%s", card);
	char end[400]={};
	char temp[400]={};
	strcpy(end, "-");
	int n, m, i, j, l;
	while (strcmp(card, end)!=0)
	{
		scanf("%d", &n);
		l=strlen(card);
		for (i=0; i<n; i++)
		{
			scanf("%d", &m);
			for (j=0; j<m; j++)
			{
				temp[j]=card[j];
			}
			for (j=0; j<l-m; j++)
			{
				card[j]=card[j+m];
			}
			for (j=l-m; j<l; j++)
			{
				card[j]=temp[j-l+m];
			}
		}
		printf("%s\n", card);
		scanf("%s", card);
	}
	return 0;
}