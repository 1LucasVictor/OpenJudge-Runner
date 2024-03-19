#include<stdio.h>

int main(){
	int A, B;
	int pura, hiku, kake, max;
	scanf("%d %d", &A, &B);
	pura = A + B;
	max = pura;
	hiku = A - B;
	kake = A*B;
	if (hiku > max){
		max = hiku;
	}
	if(kake > max){
		max = kake;
	}
	printf("%d\n", max);
	return 0;
}