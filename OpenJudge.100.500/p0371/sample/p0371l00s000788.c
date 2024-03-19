#include<stdio.h>

int main(void){
	int n,i,a,b,c;
	int x[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%d",&x[i]);
	}
	a=x[0];
	b=x[0];
	c=x[0];
	for(i=1;i<n;i++){
		if(a>x[i]){
			a=x[i];
		}
		if(b<x[i]){
			b=x[i];
		}
		c+=x[i];
	}
	printf("%d %d %d\n",a,b,c);
	return 0;
}