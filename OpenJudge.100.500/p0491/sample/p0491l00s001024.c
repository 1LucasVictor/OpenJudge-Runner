#include<stdio.h>
#include<math.h>
int main()
{
	long long n,k,i,t1,t2,j;
	scanf("%lld %lld",&n,&k);
	t1=abs(n-k);
	for(i=0;;i++)
	{
		t2=abs(t1-k);
		if(t1<t2)
		break;
		t1=t2;
	}
	printf("%lld",t1);
return 0;
}
		
		
	