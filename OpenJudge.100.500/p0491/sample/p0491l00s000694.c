#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	long long int i,j,n,k;
  scanf("%lld%lld",&n,&k);

	i=n%k;
	if(k-i<0){
		if(i-k>i)
			printf("%lld",i);
		else
			printf("%lld",i-k);
		}
	else{
		if(k-i>i)
			printf("%lld",i);
		else
			printf("%lld",k-i);
	}

	return 0;
}
