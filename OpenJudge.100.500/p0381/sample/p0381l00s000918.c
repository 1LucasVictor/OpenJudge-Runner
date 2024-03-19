#include <stdio.h>

int main(void)
{
	int n,x,i,j,k,a;
	while(1){
		scanf("%d%d",&n,&x);
		if(!(n||x))break;
		a=0;
		for(i=1;i<n-1;i++)for(j=i+1;j<n;j++)for(k=j+1;k<=n;k++)if(i+j+k==x)a++;
		printf("%d\n",a);
	}
	return 0;
}
