#include<stdio.h>
int main(void)
{
	int A,B,K,flg,i;
	flg=0;
	scanf("%d %d %d",&K,&A,&B);
	for(i=A;i<=B;i++){
	if(i%K==0){
	flg=1;
	}
	}
	if(flg==0){
		printf("NG\n");
	}
	else{
		printf("OK\n");
	}
	return 0;
}
		
		
		