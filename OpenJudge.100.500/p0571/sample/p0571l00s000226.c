#include <stdio.h>

int main()
{
	int N,A,B;
	scanf("%d %d %d",&N,&A,&B);
	
	int train= N*A;
	
	if(train<B)printf("%d\n",train);
	else printf("%d\n",B);
	return 0;
}