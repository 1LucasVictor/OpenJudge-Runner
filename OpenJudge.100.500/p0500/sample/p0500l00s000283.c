#include<stdio.h>

int main(void){
	int N,M,n[4],i,a,b,total[4],d=0;
	for(i=1;i<4;i++){total[i]=0;n[i]=0;}
	scanf("%d%d",&N,&M);
	for(i=0;i<M;i++){
		scanf("%d%d",&a,&b);
		if(a==1&&b==0&&N!=1)d=-1;
		if(total[a]==0)n[a]=b;
		else{
			if(n[a]!=d)d=-1;
		}
	}
	if(d==-1)printf("-1");
	else {
		for(i=1;i<=N;i++)printf("%d",n[i]);
	}
	return 0;
}