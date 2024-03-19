#include <stdio.h>

int main(void)
{
	int x;
	int i;
	int n[101]={0};
	scanf("%d",&x);
	for(i=0;i<x;i++){
		scanf("%d",&n[i]);
	}
	for(i<0;i--;){
		printf("%d",n[i]);
		if(i!=0)printf(" ");
	}
	printf("\n");
	return 0;
}