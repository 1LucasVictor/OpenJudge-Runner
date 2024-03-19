#include <stdio.h>

int main(void){
	int rest,n;
	scanf("%d",&n);
	rest=n%10;
	if(rest == 3 ){
		printf("bon");
	}
	else if(rest == 0 || rest == 1 || rest == 6 || rest == 8){
		printf("pon");
	}
	else{
		printf("hon");
	}
	return 0;
}
