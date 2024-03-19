#include <stdio.h>
int main(void){
	int n,a[10000],i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)scanf("%d",&a[i]);
	while(--i>0){
		printf("%d",a[i]);
		if(i==1)break;
		printf(" ");
	}
	printf("\n");
	return 0;
}
