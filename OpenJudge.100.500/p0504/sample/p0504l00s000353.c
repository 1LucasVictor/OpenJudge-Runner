#include <stdio.h>

int main()
{
	int a, h;
	scanf("%d %d", &h, &a);
	int b = h / a;
	if(h % a == 0){
		printf("%d\n", b);
	}else{
		printf("%d\n", b + 1);
	}
	return 0;
}