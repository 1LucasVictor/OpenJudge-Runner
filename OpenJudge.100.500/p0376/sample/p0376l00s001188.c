//????´\??????????????????ITP1-6-A //



#include <stdio.h>
#define N 100

int main(void)
{
	int test[N] ;
	int n,i,a,b,c;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &test[i]);
	}
	for(i=0;i<n-1;i++){
		printf("%d ", test[n-i-1]);
	}
		printf("%d\n", test[0]);
return 0;
}