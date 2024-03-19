#include <stdio.h>

int isprime(int);

int main(void){

	int n,num,i,flag=0;

	scanf("%d\n",&n);
	for(i = 0; i < n; i++){
		scanf("%d",&num);
		if(isprime(num) == 1){
			flag++;
		}
	}
	printf("%d\n",flag);
	return 0;
}

int isprime(int x){

	int i;

	if(x == 2 || x == 3) return 1;

	for(i = 2; i <= x/2; i++){		
		if(x % i == 0) return 0;
	}
	return 1;
}