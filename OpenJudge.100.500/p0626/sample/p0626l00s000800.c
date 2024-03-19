#include<stdio.h>

int main(){

		int d,n;
		scanf("%d%d",&d,&n);
		int i,t=1;
		for(i=0;i<d;i++)t*=100;
		if(((t*n)/n)%t==0)printf("%d\n",t*n);
		else printf("%d\n",t*n+1);
		return 0;
}
