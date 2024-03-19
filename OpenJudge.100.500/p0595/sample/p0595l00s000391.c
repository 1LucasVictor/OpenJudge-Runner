#include<stdio.h>
int main(void){
 
	int A, B, K;
	int count = 0;
	int a;
	scanf("%d%d%d", &A, &B, &K);
	for (int i = 1; i <=100; i++){
		if (A%i == 0 && B%i == 0){
			a = i;
			count++;
			if (count == K){
				printf("%d", i);
			}
		}


	}


	return 0;


}