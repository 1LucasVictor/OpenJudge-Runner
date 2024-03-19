#include<stdio.h>
int main(void){
	int x,y;
	int i,gcd;
	
	scanf("%d %d",&x,&y);
	
	if(x>=y){
		i=x;
		x=y;
		y=i;
	}
	for(i=1;i<=x;i++){
		if(x%i==0 && y%i==0)gcd=i;
	}
	printf("%d\n",gcd);
	return 0;
}