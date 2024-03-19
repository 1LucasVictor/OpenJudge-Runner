#include<stdio.h>

int main(void)
{
	int a,b,c,N,i,d[1000];
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d %d %d",&a,&b,&c);
		if(a*a==b*b+c*c){
			d[i]=1;
		}
		if(b*b==a*a+c*c){
			d[i]=1;
		}
		if(c*c==a*a+b*b){
			d[i]=1;
		}
		else{
			d[i]=0;
		}
	}
	
	for(i=0;i<N;i++){
		if(d[i]==1){
			printf("YES\n");
		}
		else if(d[i]==0){
			printf("NO\n");
		}
	}		
	return a;
}
	