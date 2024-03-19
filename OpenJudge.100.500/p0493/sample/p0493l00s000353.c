/*In the name of Allah*/
#include<stdio.h>
#include<math.h>
#include<limits.h>
#include<assert.h>
#include<stdbool.h>
#include<stddef.h>
#include<stdint.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
typedef long long ll;
typedef long double ld;

#define s(a) scanf("%lld",&a)
#define p(a) printf("%lld",a)
#define nl printf("\n")
#define space printf(" ")
#define pi acos(-1)

#define FOR1(i,n) for(ll i=1;i<=n;i++)
#define FOR0(i,n) for(ll i=0;i<n;i++)

int main()
{ 
ll n,t,sum=0;
    s(n);
     t=n/500; n%=500;t=t*1000;
    sum+=t; t=n/5; t=t*5;
    sum+=t;
    
    p(sum);
    
    
    nl; 
  



return 0;
}
