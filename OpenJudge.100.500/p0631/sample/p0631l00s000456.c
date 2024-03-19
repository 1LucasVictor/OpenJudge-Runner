#include<stdio.h> 
int main() 
{ 
long long x,a,b; 
scanf("%lld%lld%lld",&x,&a,&b); 
if(b-x>0&&b-x<a)printf("YES\n"); 
else printf("NO\n"); 
return 0; 
}