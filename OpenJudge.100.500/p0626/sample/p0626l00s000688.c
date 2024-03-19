#include<stdio.h>
int main(void)
{
	int D;
	int N;
	scanf("%d",&D);
	scanf("%d",&N);
	if(D==0)
		printf("%d",N);
	else if(D==1)
		printf("%d",N*100);
	else if(D==3)
	
		printf("%d",N*100*100);
		
	return 0;
}