#include<stdio.h>

int main(void)
{
	int peizi,amari;
	
	scanf("%d",&peizi);
	
	if (1==peizi%2){
		peizi=peizi/2;
		printf("%d\n",peizi+1);
	}else printf("%d\n",peizi/2);
	
	return 0;
}