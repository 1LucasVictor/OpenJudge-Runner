#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main(void){
	int d,n;
	scanf("%d %d",&d,&n);

	while(d--){
		n*=100;
	}

	printf("%d\n",n);

	return 0;
}
