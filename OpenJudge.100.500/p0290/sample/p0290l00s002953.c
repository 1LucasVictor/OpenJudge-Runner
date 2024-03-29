#include<stdio.h>
#include<math.h>

int isprime(int x){
	int i;
	if(x == 2){
		return 1;
	}
	if(x < 2 || x%2 == 0){
		return 0;
	}
	i = 3;
	while(i <= sqrt(x)){
		if(x%i == 0){
			return 0;
		}
		i += 2;
	}
	return 1;
}

int main(void){
	int a;
	int b=0, n, i;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a);
		if(isprime(a) == 1){
			b++;
		}
	}
	printf("%d\n", b);
	return 0;
}