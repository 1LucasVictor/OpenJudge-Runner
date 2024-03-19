#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	int x = a+b;
	if( x < (a-b) ){
		x = a-b;
	}
	if( x < (a*b) ){
		x=a*b;
	}
	printf("%d",x);
	return 0;
}