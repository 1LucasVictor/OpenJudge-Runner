#include<stdio.h>

int main(void){
	unsigned long long x;
	int sum=0;
	
	while(1){
		scanf("%llu",&x);
		if(x==0) break;
		
		while(x>0){
			sum += x%10;
			x = x/10;
		}
	printf("%d\n",sum);
	sum=0;
	}
	return 0;
}