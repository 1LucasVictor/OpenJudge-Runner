#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main(void){
	int a,b,c;
	scanf("%d%d", &a, &b);
	if (a%b == 0) {
		c = a / b;
	}
	else {
		c = a / b;
		c++;
	}
	printf("%d\n",c);

	return 0;
}