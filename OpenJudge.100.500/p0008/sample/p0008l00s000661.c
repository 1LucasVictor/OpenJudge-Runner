#include <stdio.h>
int f(int n){
	int i;
	for( i = 2; i * i <= n; i++ )
		if( n % i == 0 )	return 0;
	return 1;
}
int main( void ){
	int n, s;
	for(;~scanf("%d",&n);printf("%d\n",s))
		for(s=0;n>1;s+=f(n--));
	return 0;
}