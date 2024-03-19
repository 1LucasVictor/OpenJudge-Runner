#include <stdio.h>
int main(void){
	int x, y;
	scanf("%d%d", &x, &y);
	int kanou, f;
	kanou = y % 2;
	f = x*4;
	if(kanou == 0 && f >= y){
		printf("Yes");
	}
	else{
		printf("No");
	}
	
	return 0;
}