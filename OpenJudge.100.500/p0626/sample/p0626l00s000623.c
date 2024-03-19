#include<stdio.h>
int main()
{
	int d,n;

	scanf("%d%d",&d,&n);

	if(d==0){
		if(n==100){
			printf("101\n");
			return 0;
		}
		printf("%d",n);
		return 0;
	}
	if(d==1){
		if(n==100){
			printf("10100\n");
			return 0;
		}
		printf("%d",n*100);
		return 0;
	}
	if(d==2){
		if(n==100){
			printf("1010000\n");
			return 0;
		}
		printf("%ld",n*10000);
		return 0;
	}
}