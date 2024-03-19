#include <stdio.h>
int main(void){
	int x, y;
	if(scanf("%d%d", &x, &y)==1);
	int kanou, f;
	kanou = y % 2;
	f = x*4;
	if(kanou == 0){
		if(f>=y){
			printf("Yes");
		}
		else{
			printf("No");
		}
	}
	else{
		printf("No");
	}
	
	return 0;
}