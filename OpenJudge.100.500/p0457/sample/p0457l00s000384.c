#include <stdio.h>
#include <string.h>

int main()
{

long long int i,j,count=0,a[200010],b[200010],k,n,m,sum=0;
scanf("%lld %lld %lld", &n,&m,&k);

for(i=0;i<n;i++)
scanf("%lld", &a[i]);


for(i=0;i<m;i++)
scanf("%lld", &b[i]);

for(i=0;i<n;i++)
{
	sum+=a[i];
	count++;
	if(sum>k) 
	{
		sum-=a[i];
		count--;
		break;
	}
	//printf("%lld**", sum);
}
//printf("###%lld******",sum);
for(i=0;i<m;i++)
{
	sum+=b[i];
	count++;
	if(sum>k)
	{
		 count--;
		  break;
	}
	//	printf("%lld##", sum);
}

printf("%lld", count);
	return 0;
}