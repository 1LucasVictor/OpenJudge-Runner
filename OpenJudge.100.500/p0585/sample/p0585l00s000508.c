#include<stdio.h>/*素数かどうか*/
int main(){
	int A;
	int B;
	int T;
	int Count;
	int x;
	scanf("%d%d%d",&A,&B,&T);
	x=(T+0.5)/A;
	Count=x*B;
	printf("%d",Count);
	return(0);
}