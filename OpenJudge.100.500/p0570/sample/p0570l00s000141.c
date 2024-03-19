#include <stdio.h>

int main(void) {
	// your code goes here
	int a, b, k;
	scanf("%d %d", &a, &b);
	k = (a+b)/2;
	int tm1, tm2;
	tm1 = abs(a-k);
	tm2 = abs(b-k); 
	if(tm1 == tm2){
	printf("%d\n", k);
	}
	else {
		printf("IMPOSSIBLE\n");
	}
	return 0;
}
