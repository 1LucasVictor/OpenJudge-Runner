#include <stdio.h>
int main(void)
{
	int i,n,x[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	for(i=(n-1);i>=0;i--){
		printf("%d",x[i]);
		if(i==0) break;
		printf(" ");
	}
	printf("\n");
	return 0;
}