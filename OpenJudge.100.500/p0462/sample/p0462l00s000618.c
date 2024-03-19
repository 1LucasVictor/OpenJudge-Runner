#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	long double A=0.0,B=0.0,tmp=0.0;
	long long ans=0.0;

	scanf("%Lf", &A);
	scanf("%Lf", &B);

	//printf("A=%lf\n",A);
	//printf("B=%lf\n",B);
	if(0<=A && A<=(pow(10,15.0))){
		if(0.0<=B && B<10.0){
			ans = (long long)(A*B);
			printf("%lld\n",ans);
		}
	}

	return 0;
}
