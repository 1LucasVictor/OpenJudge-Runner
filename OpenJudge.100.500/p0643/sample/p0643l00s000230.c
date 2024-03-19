#include <stdio.h>
//#define DEBUG

int main()
{
	long int a,b;
	scanf("%ld%ld",&a,&b);
#ifdef DEBUG
	printf("%ld %ld\n",a,b);
#endif
	if((a*b)%2) printf("Odd\n");
	else        printf("Even\n");
	fflush(stdout);

	return 0;
}

