#include <stdio.h>
int main()
{
	int n, i, j;
	scanf("%d", &n);
	int a[n];
	for(i=n; i>0; i--){
		scanf("%d", &a[i]);
	}
	for(j=1; j<=n; j++){
		if(j==1){
			printf("%d", a[1]);
		} else {
			printf(" %d", a[j]);
		}
	}
	printf("\n");
	return 0;
}