#include<stdio.h>
int main(void){
	int N,a,b,c,i;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d %d %d",&a,&b,&c);
		a=a*a;
		b=b*b;
		c=c*c;
		if(a+b==c||a+c==b||b+c==a){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	return 0;
}
