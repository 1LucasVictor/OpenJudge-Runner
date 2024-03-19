#include <stdio.h>
#include <string.h>
int a, b;

int main(void) { 
	scanf("%d %d", &a, &b);
	if(b == 1) {
	    printf("0\n");
	    return 0;
	}
	int left = b - a;
    if(left <= 0) {
        printf("1\n");
        return 0;
    }
    int ans = left / (a - 1) + (left % (a - 1) != 0);
    printf("%d\n", ans + 1);
	return 0;
}