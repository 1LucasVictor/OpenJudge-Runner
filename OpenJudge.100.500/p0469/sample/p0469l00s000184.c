#include <stdio.h>
#include <stdlib.h>


int main(void){
	int k,a,b,i;
	scanf("%d %d %d",&k,&a,&b);
	
	for(i=a;i<=b;i++){
		if(i%k == 0)
		 break;
	}
	
	if(i==b+1)
		printf("NG\n");
	else
		printf("OK\n");
	
	return 0;
}