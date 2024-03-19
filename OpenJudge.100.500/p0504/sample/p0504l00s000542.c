#include <stdio.h>

int main (){
	int h, a;
	scanf("%d %d", &h, &a);
	scanf("%d\n", h / a + 1);
	
	h % a == 0 ? printf("%d\n", h / a) : printf("%d\n", h / a + 1);
	
	return 0;
}