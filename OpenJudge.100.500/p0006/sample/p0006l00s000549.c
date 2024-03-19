#include<stdio.h>

int main(void){
	int i,n,x;
	n=0;
	scanf("%d",&n);
	x=100000;
	for(i=0;i<n;i++){
	x=x*1.05;
	if(x%1000 != 0){
	x=x-x%1000+1000;
	}
	}
	printf("%d\n",x);
return 0;
}