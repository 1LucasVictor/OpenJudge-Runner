#include<stdio.h>
int main(){
	int i,n;
	int a[10001],b[10001],c[10001],d[10001],e[10001];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i/10000==3 || i/1000==3 || i/100==3 || i/10==3 || i/10000==3 || i%1000==3 || i%100==3 || i%10==3){
			printf(" %d",i);
		}
		else if(i%3==0)printf(" %d",i);
	}
	printf("\n");
	return 0;
}

