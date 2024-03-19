#include<stdio.h>

int main(void){
	int N,M,n[4],i,a,b,total[4],d=0;
	n[1]=1;
	for(i=2;i<4;i++){total[i]=0;n[i]=0;}
	scanf("%d",&N);
	scanf("%d",&M);
	for(i=0;i<M;i++){
		scanf("%d",&a);
		scanf("%d",&b);
		if(a==1&&b==0&&N!=1)d++;
		if(total[a]==0){
			n[a]=b;
			total[a]++;
		}
		else{
			if(n[a]!=b)d++;
		}
	}
	if(d!=0)printf("-1");
	else {
		for(i=1;i<=N;i++)printf("%d",n[i]);
	}
	return 0;
}