#include <stdio.h>

int main(void)
{
	int n1, n2, n3;

	scanf("%d %d %d", &n1, &n2, &n3);

	if(n1 + n2 + n3 == 17 && n1 * n2 * n3 == 175){
		puts("YES");
	}else{
		puts("NO");
	}
	return 0;
}
