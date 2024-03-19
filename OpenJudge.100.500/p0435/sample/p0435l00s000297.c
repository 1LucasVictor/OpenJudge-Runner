#include<stdio.h>
int main(){
	int n,d,cou = 0,i = 0;
	int x[200000];
	int y[200000];
	
	scanf("%d %d",&n,&d);
	while(i < n){
		scanf("%d %d",&x[i],&y[i]);
		if((x[i] * x[i]) + (y[i] * y[i]) <= d * d){
			printf("\n");
			cou += 1;
		}
		i++;
	}
	printf("%d",cou);
}