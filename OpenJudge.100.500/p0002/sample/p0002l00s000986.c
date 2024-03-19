#include<stdio.h>

int main(void){
	int i,N,x[1000],y[1000],z[1000];
	for(i=0;i<1000;i++){
	x[i]=0;
	y[i]=0;
	z[i]=0;
	}
	N=0;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d %d %d",&x[i],&y[i],&z[i]);
	}
	for(i=0;i<N;i++){
		if(x[i]*x[i] == y[i]+z[i]){
		printf("YES\n");
	}
		if(y[i]*y[i] == x[i]+z[i]){
		printf("YES\n");
	}
		if(z[i]*z[i] == x[i]+y[i]){
		printf("YES\n");
	}
		if(x[i]*x[i] != y[i]+z[i] && y[i]*y[i] != x[i]+z[i] && z[i]*z[i] != x[i]+y[i]){
			printf("NO\n");
	}
	}
return 0;
}