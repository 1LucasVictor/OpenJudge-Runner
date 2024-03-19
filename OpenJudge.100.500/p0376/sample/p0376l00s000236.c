#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int n, *a;
	int i;

	scanf("%d", &n);

	a=(int *)malloc(sizeof(int)*n);
	if (a==NULL) exit(0);

	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}

	for(i=n-1;i>0;i--){
		printf("%d ", a[i]);
	}

	printf("%d\n", a[0]);

	free(a);

	return 0;
}