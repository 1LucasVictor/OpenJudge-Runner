#include <stdio.h>
#include <stdlib.h>

int compar(const void *p1, const void *p2);

int main()
{
	int i,n;
	
	scanf("%d",&n);
	
	int a[n];
	
	for(i = 0;i < n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	qsort(a,n,sizeof(int),compar);
	
	for(i = 0;i < n-1;i++)
	{
		if(a[i] == a[i+1])
			break;
	}
	
	printf("%s\n",i == n - 1?"YES":"NO");
	
	return 0;
}

int compar(const void *a, const void *b)
{
	return *(int*)a-*(int*)b;
}