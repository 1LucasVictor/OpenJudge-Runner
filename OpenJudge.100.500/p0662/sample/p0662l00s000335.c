#include<stdio.h>
#include<string.h>

int main(void) {

	int a, b, c, d;
	int time;

	scanf("%d%d%d%d", &a, &b, &c, &d);
	   
	//a<=cの場合にaとcを固定//
	if (a <= c) {
		if (b < c) {
			time = 0;
		}
		else if(c<=b&&b<=d){
			time = b - c;
		}
		else {
			time = d - c;
		}
	}
	else if (c < a) {
		if (b <= b) {
			time = b - a;
		}
		else {
			time = d - a;
		}
	}


	printf("%d", time);

	return 0;
}