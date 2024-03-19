#include <stdio.h>

int digit_number(int, int);

int main(){
	int a1, a2, a3, b1, b2, b3;
	scanf("%d %d", &a1, &b1);
	scanf("%d %d", &a2, &b2);
	scanf("%d %d", &a3, &b3);
	printf("%d\n", digit_number(a1+b1, 1));
	printf("%d\n", digit_number(a2+b2, 1));
	printf("%d\n", digit_number(a3+b3, 1));
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