#include<stdio.h>

int main(){
	int a,b,r;
	scanf("%d %d",&a,&b);
	r = a * b % 2;
	if(r == 0){
		printf("Even");
	}else{
		printf("Odd");
	}
	return 0;
}
