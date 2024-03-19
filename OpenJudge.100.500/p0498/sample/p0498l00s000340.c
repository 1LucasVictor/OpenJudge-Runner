#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
typedef long long ll;


int main()
{
    int n;
    scanf("%d",&n);
    
    if(n%2==0)
    {
        n=n/2;
    }
    else
    {
        n=n+1;
        n=n/2;
    }

    printf("%d\n",n);
    
    return 0;
}