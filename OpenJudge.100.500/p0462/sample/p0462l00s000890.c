#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	//変数宣言
	float B;
	int b, b1 , b2 , b3;
	long long int A , a1 ,a2 ,a3 , ans;
	
	scanf("%lld %f",&A , &B);
	
	b = (int)round(B*100);
	b1 = (b/100)%10;
	b2 = (b/10)%10;
	b3 = b%10;
	
	a1 = A*b1;
	a2 = (A/10)*b2;
	a3 = (A/100)*b3;
	
	ans = a1 + a2 + a3;
	
	printf("%lld",ans);
	
	return 0;
}