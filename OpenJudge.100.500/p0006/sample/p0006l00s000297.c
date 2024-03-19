#include <stdio.h>

int debt_amount(int, int);

int main(){
	int n;
	scanf("%d", &n);
	printf("%d\n", debt_amount(100000, n));
	return 0;
}

int debt_amount(int a, int x){
	if(x >= 1){
		a = (a + a*0.05)/1000 + 0.999;
		a = a*1000;
		return debt_amount(a, x-1);
	}else{
		return a;
	}
}