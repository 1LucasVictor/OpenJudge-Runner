#include <stdio.h>
int abs(int n){
		if(n<0){
		return -1*n;}else
		return n;}
int main(void)
{int N,A,M,B,X,C,x,i,a,b,c,l,r,g,m,tmp;
	scanf("%d%d%d",&X,&A,&B);
if(B<=A){
	printf("delicious");}
	else if(B<=A+X){
		printf("safe");}
		else{
			printf("dangerous");}


	return 0;
}
