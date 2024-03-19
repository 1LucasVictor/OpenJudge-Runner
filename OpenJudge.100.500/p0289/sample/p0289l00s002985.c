#include<stdio.h>
int main(void){
	int x, y, a, b;
	scanf("%d %d", &x, &y);
	if(x<y){
		b=x;
		x=y;
		y=b;}
	while(y>0){
		a=x%y;
		x=y;
		y=a;
	}
	printf("%d\n", x);
	return 0;
}
