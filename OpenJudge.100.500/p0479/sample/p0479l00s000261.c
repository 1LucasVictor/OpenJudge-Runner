#include <stdio.h>
int main()
{

	long long int a,b,c=0,d,e,f,i,j,k,l,m,n;
	scanf("%lld",&n);
	long long int x[n+1];
	memset(x, 0, sizeof x);
	for(i=0;i<n-1;i++)
    {
        scanf("%lld",&a);
        x[a]++;
    }
    for(i=1;i<n+1;i++)
    {
        printf("%lld\n",x[i]);
    }

}
