#include<stdio.h>
int gcd(int a, int b){
	if(!b) return a;
	return gcd(b, a%b);
}
int main(void){
	int big, small, kyk, kbi, tmp;
	while(scanf("%d %d", &small, &big) != EOF){
		if(small>big){
			tmp=big;
			big=small;
			small=tmp;
		}
		kyk = gcd(big, small);
		kbi = big / kyk * small;
		printf("%d %d\n", kyk, kbi);
	}
	return 0;
}