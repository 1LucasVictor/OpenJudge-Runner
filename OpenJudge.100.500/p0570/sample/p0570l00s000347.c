#include<stdio.h>
int a, b;
int main(void){
	scanf("%d%d", &a, &b);
	a+=b;
	if(a&1){
		puts("IMPOSSIBLE");
	}else{
		printf("%d\n", a>>1);
	}
}

