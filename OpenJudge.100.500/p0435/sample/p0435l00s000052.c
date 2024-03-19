// B
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n;
	long d;
	scanf("%d %ld", &n, &d);
	long x, y;
	int sum = 0;
	d *= d;
	for(int i = 0; i < n; i++){
		scanf("%ld %ld", &x, &y);
		if(x * x + y * y <= d)sum++;
	}
	printf("%d\n", sum);
	return 0;
}
