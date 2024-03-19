#include<stdio.h>

int main(){
	int N,baseline,height,obliqueline,i;
	double a,b,c;
	scanf("%d",&N);
	for(i=1;i<=N;i++){
		scanf("%d %d %d",&baseline,&height,&obliqueline);
		a=pow(baseline,2);
		b=pow(height,2);
		c=sqrt(a+b);
		if((int)c==obliqueline){
			printf("YES");
		}
		else{
			printf("NO");
		}
	}
	return 0;
}