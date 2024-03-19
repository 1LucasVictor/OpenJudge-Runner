#include<stdio.h>
int main(void)
{
	int i,n,x[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
		scanf("%d",&x[i]);
	}
	for(i=n;i>=1;i--) {
		if(i!=1) {
			printf("%d ",x[i]);
		}
		else {
			printf("%d\n",x[i]);
		}
	}
	return 0;
}