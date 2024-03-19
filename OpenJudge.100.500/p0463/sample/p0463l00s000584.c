#include <stdio.h>

int main()
{
	
	int  n;
	scanf("%d", &n);
	for(;;){
		n %= 10;
		if(0 <= n && n <= 9){
			break;
		}
	}
	
	if(n == 3){
		printf("bon");
	}else if(n == 0 || n == 1 || n == 6 || n == 8){
		printf("pon");
	}else{
		printf("hon");
	}
}