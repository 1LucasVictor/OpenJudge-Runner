#include <stdio.h>
#include <math.h>

int main(){
	int x,y;
	int a;
	char s;

	while (1){
		scanf("%d %c %d", &x, &s, &y);
		if (s == '?') break;

		if (s == '+')a = x + y;
		else if (s == '-')a = x - y;
		else if (s == '*')a = x*y;
		else a = x / y;

		printf("%d\n",a);

	}
	
	return 0;
}