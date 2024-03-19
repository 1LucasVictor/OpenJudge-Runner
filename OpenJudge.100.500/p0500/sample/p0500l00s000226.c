#include<stdio.h>

int main(void){
	int N,M,n[5],i,a,b,total[5],d=0;
	for(i=1;i<4;i++){total[i]=0;n[i]=0;}
	n[1]=1;
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
	if(M==0&&N==1)n[1]=0;
	if(d!=0)printf("-1");
	else {
		for(i=1;i<=N;i++)printf("%d",n[i]);
	}
	return 0;
}