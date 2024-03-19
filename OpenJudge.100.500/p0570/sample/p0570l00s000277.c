#include <stdio.h>
int main(){
	int A, B;
	scanf("%d %d",&A,&B);
	int K;
	K = (A+B)/2;
	if((A+B)%2==0){
		printf("%d",K);
	}
	else printf("IMPOSSIBLE");
	return 0;
}