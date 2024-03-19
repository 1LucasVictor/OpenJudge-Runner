#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main(void){
	int d,n;
	scanf("%d %d",&d,&n);

	if(n==100) n++;
	while(d--){
		n*=100;
	}

	printf("%d\n",n);

	return 0;
}
