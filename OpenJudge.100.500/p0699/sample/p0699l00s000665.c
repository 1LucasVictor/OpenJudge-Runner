#include <stdio.h>

int main(void)
{
	int a, b, c;
	int n;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if (a == 7){
		if (b == 5 && c == 5){
			a = 1;
		}
	}
	else if (b == 7){
		if (a == 5 && c == 5){
			a = 1;
		}
	}
	else if (c == 7){
		if (a == 5 && b == 5){
			a = 1;
		}
	}
	
	if (a == 1){
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
	
	return (0);
}