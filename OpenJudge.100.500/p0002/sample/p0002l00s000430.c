#include<stdio.h>

int main(void){
	int i,N;
	scanf("%d",&N);
	int x[N],y[N],z[N];
	for(i=0;i<N;i++){
		x[i]=0;
		y[i]=0;
		z[i]=0;
		scanf("%d %d %d",&x[i],&y[i],&z[i]);
	}
	for(i=0;i<N;i++){
		if(x[i]*x[i] == y[i]+z[i]){
		printf("YES\n");
	}
		else if(y[i]*y[i] == x[i]+z[i]){
		printf("YES\n");
	}
		else if(z[i]*z[i] == x[i]+y[i]){
		printf("YES\n");
	}
		else printf("NO\n");
	}
return 0;
}