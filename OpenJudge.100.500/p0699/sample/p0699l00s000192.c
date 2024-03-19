#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//
void core(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a == 7 && c == 5){
		a = 5;
		c = 7;
	}
	if (b == 7 && c == 5){
		b = 5;
		c = 7;
	}
	printf((a == 5 && b == 5 && c == 7) ? "YES" : "NO");
}
//

int main(){
	core();
	return 0;
}