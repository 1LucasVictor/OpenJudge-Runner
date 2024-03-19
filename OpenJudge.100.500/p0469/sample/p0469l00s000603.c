#include<stdio.h>
 main(){
	int A ,B, K;
	scanf("%d,%d,%d",&K,&A,&B);
	if(A==K||B==K)
	printf("OK");
	else if(A/K!=B/K)
	  printf("OK");
	  else printf("NG");
	}