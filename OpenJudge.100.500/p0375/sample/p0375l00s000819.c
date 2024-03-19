#include<stdio.h>

int main(void){

	int x;
	int i;
	int j;
	int n;

	i=0;

	scanf("%d",&x);

	while(1){
		i = i+1;
		j=1;
		if(i==x+1)break;
		if( i % 3 == 0){
			printf(" %d",i);
		}
		else{
			while(1){
				if(j>=10000)break;
				n=i/j;	
				if(n % 10 ==3){
					printf(" %d",i);
					break;
				}
				j=j*10;
			}
		}
	}
	printf("\n");
	return 0;
}