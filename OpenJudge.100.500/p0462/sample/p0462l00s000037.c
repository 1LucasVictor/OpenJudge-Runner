#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	long long A=0.0,ans=0.0;
	double B=0.0;

	scanf("%lld", &A);
	scanf("%lf", &B);

	if(0<=A && A<=(pow(10,15.0))){
		if(0.0<=B && B<10.0){
			ans = (A*B);
			printf("%lld\n",ans);
		}
	}

	return 0;
}
