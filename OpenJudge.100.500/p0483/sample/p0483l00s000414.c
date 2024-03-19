#include <stdio.h>

int main (){
	int n= 100<= n <= 999;
	scanf("%d", &n);
	if( (n+3)% 10 == 0){
		printf("Yes");
	}else{
		printf("No");
	}

	return 0;
}