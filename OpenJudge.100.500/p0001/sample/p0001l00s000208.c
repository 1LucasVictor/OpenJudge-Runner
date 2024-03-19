#include <stdio.h>

int digit_number(int, int);

int main(){
	int a, b;
	
	while(scanf("%d %d", &a, &b) != EOF){
		printf("%d\n", digit_number(a+b, 1));
	}

	return 0;
}

int digit_number(int x, int flag){
	if(x/10 >= 1){
		flag++;
		return digit_number(x/10, flag);
	}else{
		return flag;
	}
}