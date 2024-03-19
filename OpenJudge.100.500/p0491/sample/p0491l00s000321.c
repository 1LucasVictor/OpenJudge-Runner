#include <stdio.h>

int main() 
{
    long long a,b,c,i,j,k;
    scanf("%lld%lld",&a,&b);
    if(a>b)
    {
    	if(a%b==0)
    	a=0;
    	else
    	{
    		for(i=0;1;i++)
    		{
    			a=a-b;
    			if(a<0)
    			break;
			}
			a=-a;
			a=(b-a)>a?a:(b-a);
		}
	}
    else
    {
    	a=(b-a)>a?a:(b-a);
	}
    printf("%lld",a);
    return 0;
}
