#include<stdio.h>
int main(void)
{
	int N,A,i;

	scanf("%d",&N);

	for(i=0;i<N;i++){
		scanf("%d",&A);
	if((A%2==0)&&(A%3!=0)&&(A%5!=0))
		printf("DINIED\n");
	
	
	}
     printf("APPROVED\n");
	return 0;

}