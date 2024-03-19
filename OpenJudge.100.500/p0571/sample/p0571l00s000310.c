#include <stdio.h>
#define min(a,b) a<b ? a:b
int main(){
	int N,A,B;
	scanf("%d%d%d",&N,&A,&B);
	printf("%d\n",min(A*N,B));
	return 0;
}