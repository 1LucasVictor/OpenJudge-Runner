#include <stdio.h>

int main()
{
	long a, b, z, a1, b2, lcm, temp;

	while(scanf("%ld %ld", &a, &b)!=EOF){
		a1=a+1;
		b2=b+1;
		while((z = a % b)!= 0){
			a = b;
			b = z;
			}
		printf("%ld ", b);
		temp=(b2-1)/b;
		lcm=(a1-1)*temp;
		printf("%ld\n", lcm);
	}
	return 0;
}