#include <stdio.h>
int main(){
	int D,N;
	scanf("%d%d",&D,&N);
	if(D == 0)
	printf("%d\n",N);
	else if(D ==1)
	printf("%d\n",100*N);
	else 
	printf("%d\n",10000*N);
	return 0;
}