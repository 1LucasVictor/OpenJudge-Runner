#include <stdio.h>

int main()
{
	int a,b,c,x,d;
	int T=0;

	scanf("%d %d %d",&a,&b,&c);
	for (x = a;x <= b;x++) {
		if (c%x == 0) {
			T++;
		}
	}
	printf("%d\n",T);

	return 0;
}