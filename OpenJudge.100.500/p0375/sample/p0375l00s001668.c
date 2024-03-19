#include<stdio.h>

void call(int n);
int main(void)
{
	int num;

	scanf("%d",&num);
	if(3<=num && num<=10000) call(num);
	return 0;
}

void call(int n)
{
	int i,x;

	for(i=1;i<=n;i++){
		x=i;
		if(x % 3 == 0) printf(" %d",i);
		else{
			while(x){
				if(x % 10 == 3){
					printf(" %d",i);
					break;
				}
				x/=10;
			}
		}
	}
	printf("\n");
	return;
}