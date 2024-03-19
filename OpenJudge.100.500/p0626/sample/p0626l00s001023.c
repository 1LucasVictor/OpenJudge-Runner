#include <stdio.h>
#include <stdlib.h>

int main(){
	int D, N,result;
	scanf("%d %d",&D,&N);
	if(D ==0){
		printf("%d",N);
	}
	else{
		result = N*100*D;
		printf("%d",result);
	}

	return 0;
}