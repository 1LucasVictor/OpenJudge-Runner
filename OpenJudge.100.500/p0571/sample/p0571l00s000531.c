#include<stdio.h>
int n, a, b;
int main(void){
	scanf("%d%d%d", &n, &a, &b);
	if(n*a>b){
		printf("%d\n", b);
	}else{
		printf("%d\n", n*a);
	}
}

