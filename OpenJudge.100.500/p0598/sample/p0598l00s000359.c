#include <stdio.h>

int main(void){
	int a,b;
	scanf("%d %d",&a,&b);
	int temp = b%a;
	if(temp==0){
		printf("%d",a+b);
	}else{
		printf("%d",b-a);
	}
	return 0;
}