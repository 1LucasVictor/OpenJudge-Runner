#include<stdio.h> 
int main() 
{ 
long long x,a,b; 
scanf("%lld%lld%lld",&a,&b,&x); 
if(a<=x&&a+b>=x)printf("YES\n"); 
else printf("NO\n"); 
return 0; 
}