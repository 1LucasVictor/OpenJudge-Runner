#include<stdio.h>
int main(void){
	int x,y,temp,i,div=1;
	scanf("%d %d",&x,&y);
	if( x > y){temp=x;x=y;y=temp;}
	for(i=1;i<x-1;i++){
		if((x%i==0) && (y%i==0)){div=i;}
	}
	printf("%d\n",div);
	return 0;
}