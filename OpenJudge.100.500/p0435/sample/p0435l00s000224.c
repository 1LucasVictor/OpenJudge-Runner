// B
#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n, d;
	scanf("%d %d", &n, &d);
	int x, y, sum = 0;
	d *= d;
	for(int i = 0; i < n; i++){
		scanf("%d %d", &x, &y);
		if(x * x + y * y <= d)sum++;
	}
	printf("%d\n", sum);
	return 0;
}
