#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	int n;

	scanf("%d\n",&n);
	if(n%2==1){
		n=n/2+1;
	}else{
		n=n/2;
	}
	printf("%d",n);
	return 0;
}
