#include <stdio.h>

int main(void){
	int N,A,B;
	scanf("%d %d %d",&N,&A,&B);
	if(N*A<B) printf("%d\n",N*A );
	else printf("%d\n",B );
}