#include<stdio.h>
int main(void){
	int a = 0;
	int b = 0;
	int x = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	x = (b-1) / (a-1);
	if((b-1) % (a-1) != 0){
		x++;
	}
	printf("%d\n", x);
	return 0;
}