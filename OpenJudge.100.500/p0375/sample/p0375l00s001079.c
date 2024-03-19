#include<stdio.h>

int main()
{
	int num;
	int i;
	
	scanf("%d",&num);
	
	for(i=1;i<=num;i++) if( (i%10)==3 || (i%3)==0 ) printf(" %d",i);
	
	printf("\n");
	return 0;
}
