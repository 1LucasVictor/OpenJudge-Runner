#include<stdio.h>
int main()
{
	long a,b,c,k;

	scanf("%ld%ld%ld%ld",&a,&b,&c,&k);

	if(k-a-b<=0){
		printf("%ld",k-b);
		return 0;
	}
	else{
		printf("%ld",a-(k-a-b));
		return 0;
	}
}