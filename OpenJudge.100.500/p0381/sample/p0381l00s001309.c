#include <stdio.h>

int main(void){
	int n,x,count;
	int i,j,k;
	for(;;){
		count = 0;
		scanf("%d %d",&n,&x);
		if(!n&&!x) break;
		for(i=1;i<=n;i++)for(j=i+1;j<=n;j++)for(k=j+1;k<=n;k++) if((i+j+k) == x) count++;
		printf("%d\n",count);
	}
	return 0;
}