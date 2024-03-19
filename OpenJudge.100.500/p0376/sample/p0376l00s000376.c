#include <stdio.h>
int main(void)
{
	int n,i;
	int array[100];
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		scanf("%d",&array[i]);
	}
	for (i=n;i>=2;i--){
		printf("%d ",array[i]);
	}
	printf("%d\n",array[1]);
	return 0;
}