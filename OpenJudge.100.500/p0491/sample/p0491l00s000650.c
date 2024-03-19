#include<stdio.h>
int main()
{
	long long int n,k;
	scanf("%d%d",&n,&k);
	if(n%k<=k-(n%k)) printf("%d\n",n%k);
	else printf("%d\n",k-(n%k));
	return 0;
}
