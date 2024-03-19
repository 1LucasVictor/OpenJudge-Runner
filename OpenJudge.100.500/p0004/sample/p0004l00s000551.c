#include<stdio.h>
int main()
{
	long long a,b,GCD,LCM,i,n;

	while (scanf("%lld %lld",&a ,&b)!=EOF) {

		if (a<b)
		n=a;
		else
		n=b;

		for (i=n ; i>=1 ; i-- ) {

			if ((a%i==0) && (b%i==0)){
			GCD=i;
			break;
			}
		}
		LCM=(a*b)/GCD;
		printf("%lld %lld\n",GCD ,LCM);
	}
	return 0;
}