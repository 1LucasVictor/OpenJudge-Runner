#include <stdio.h>
int main(void)
{
	int S;
	scanf("%d", &S);
    
	int m, h;
	m = S / 60;
	S %= 60;
	h = m / 60;
	m %= 60;
	printf("%d:%d:%d\n",h,m,S);
    return 0;
}
