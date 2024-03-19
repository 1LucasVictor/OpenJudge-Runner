#include <stdio.h>
//#define DEBUG

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
#ifdef DEBUG
	printf("%d %d\n",a,b);
#endif
	if((a+b)%2) printf("Even\n");
	else        printf("Odd\n");
	fflush(stdout);

	return 0;
}

