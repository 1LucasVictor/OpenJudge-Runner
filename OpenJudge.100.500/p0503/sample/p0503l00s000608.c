#include <stdio.h>

int main()
{
	int n,i=0,j=0,k=0,cnt=0;
	int a[200000];

	scanf("%d", &n);

	for(k=0;k < n;k++){
		scanf("%d", &a[k]);
	}

	for (i=0; i < n; i++)
	{
		for (j=0; j < n; j++)
		{
			if(i==j){
				continue;
			} 
			if(a[i]==a[j]) {
				printf("NO\n");
				return 0;
			}
		}
	}
	printf("YES\n");
}