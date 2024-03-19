#include <stdio.h>
int f(int r, int n){
	int s=0,i;
	if(r<0)return 0;
	if(!n)return!r;
	for(i=0;i<=9;i++)s+=f(r-i,n-1);
	return s;
}
int main( void ){
	int n;
	for(;~scanf("%d",&n);printf("%d\n",f(n,4)));
	return 0;
}