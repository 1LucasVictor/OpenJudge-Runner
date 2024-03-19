#include <stdio.h>

int main (){
	int n= 100<= n <= 999;
	scanf("%d", &n);
	if( (n+3)% 10 == 0){
		printf("Yes\n");
	}else{
		printf("No\n");
	}

	return 0;
}
