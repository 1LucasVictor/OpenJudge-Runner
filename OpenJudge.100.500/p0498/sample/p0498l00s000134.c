#include<stdio.h>

int main(void){
	int a,b;
	scanf("%d",&a);
	if(a%2==0){
		b=a/2;
	}else{
		b=(a/2)+1;
	}
	printf("%d",b );
	return 0;
}
