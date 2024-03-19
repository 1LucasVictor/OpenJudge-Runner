#include <stdio.h>
#define Boolean int
#define TRUE 1
#define FALSE 0

Boolean prime(int n){
	int i,j;

	if(n == 2){
		return TRUE;
	}
	if(n % 2 == 0){
		return FALSE;
	}

	j = n / 2;

	for(i = 3;i % 10 != 5,i < j;i+=2){
		if(i % 10 != 5){
			if(n % i == 0){
				return FALSE;
			}
		}
	}
	return TRUE;
}

int main(void){
	int N,n,cnt = 0;

	scanf("%d", &N);

	while(N--){
		scanf("%d", &n);
		if(prime(n)){
			//printf("prime:%d\n", n);
			cnt++;
		}
	}

	printf("%d\n", cnt);

	return 0;
}