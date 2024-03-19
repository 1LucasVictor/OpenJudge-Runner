#include<stdio.h>
int a, b, c;
int main(void){
	scanf("%d%d%d", &a, &b, &c);
	a=b+c-a;
	if(a<0){
		puts("0");
	}else{
		printf("%d\n", a);
	}
}

