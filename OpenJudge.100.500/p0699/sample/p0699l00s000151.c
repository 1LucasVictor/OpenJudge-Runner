#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define pr 0.000001
typedef long long ll;

ll max(ll a, ll b)
{
    return a>b ? a : b;
}
ll min(ll a, ll b)
{
    return a<b ? a : b;
}
int comparetor (const void * a, const void * b)
{
	return ( *(int*)a - *(int*)b );
}
int main()
{
    int arr[3];
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    int c5=0, c7=0;
    for(int i=0; i<3; i++)
    {
    	if(arr[i]==7)
    		c7++;
    	else if(arr[i]==5)
    		c5++;
    }
    if(c5==2 && c7==1)
    	printf("YES\n");
    else
    	printf("NO\n");
    return 0;
}