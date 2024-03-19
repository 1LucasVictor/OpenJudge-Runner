#include <stdio.h>
#include <string.h>
#include <math.h>
#define rep(i,l,n) for(i=l;i<n;i++)
int g(int x,int y){
	int c;
	if(x<y){
		c=x;
		x=y;
		y=c;
	}
	if(y==0){
		return x;
	}else{
		return g(x%y,y);
	}
}

int main(void){
	int A,B,a,b,G,L;
	while(scanf("%d %d",&A,&B)!=EOF){
		G=g(A,B);
		a=A/G;
		b=B/G;
		L=a*b*G;
		printf("%d %d\n",G,L);
	}
	
	return 0;
}