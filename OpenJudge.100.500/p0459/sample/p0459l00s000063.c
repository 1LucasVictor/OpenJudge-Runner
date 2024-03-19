#include <stdio.h>
int main(void){
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);
	if(2*x <= y && y <= 4*x && y%2 == 0){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	return 0;
}