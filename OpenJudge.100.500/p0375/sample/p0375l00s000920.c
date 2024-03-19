#include<stdio.h>
int main(void){
int i=1,x=i,n;
	scanf("%d",&n);
	while(n>=i){
		if(x%3==0){
			printf(" %d", i);
		}
		else if(x%10==3){
			printf(" %d", i);
		}
		while(i==0){
		x/=10;
		if(x%10==3){
			printf(" %d", i);
		}
		}
		i++;
		x=i;
	}
	printf("\n");
	return 0;
}
