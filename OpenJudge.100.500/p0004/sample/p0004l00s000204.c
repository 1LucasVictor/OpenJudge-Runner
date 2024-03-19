#include<stdio.h>

int isGCD(int a, int b){
	while(1){
		int tmp = a % b;
		a = b;
		b = tmp;
		if(!b){
			break;
		}
	}
	return a;
}

int main(void){
	int a, b, i, GCD;
	long LCM;
	
	while(scanf("%d %d", &a, &b) != EOF){
		if(a < b){
			int tmp = a;
			a = b;
			b = tmp;
		}
		GCD = isGCD(a, b);
		
		LCM = ((long)a * b) / GCD;
		
		printf("%d %lu\n", GCD, LCM);
	}
	return 0;
}