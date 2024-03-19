#include <stdio.h>
int main(){
	int sum;
	unsigned long long int i;
	while(1){
		sum = 0;
		scanf("%lld",&i);
		if(!i)break;
		while(i){
			sum += i%10;
			i /= 10;
		}
		printf("%d\n",sum);
	}
}