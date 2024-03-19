#include<stdio.h>
#include<math.h>
int main()
{
   long long int x,y,i,j,k,count=0,a[432],n,b,t,c ;
   double d ;
   char ch[4534] ;
   scanf("%lld %lld",&n,&k) ;
for(i=1 ; i<=n ; i++)
{
    scanf("%lld %lld",&x,&y) ;
    d=sqrt(x*x + y*y) ;
    if(d>(k*1.0))
        count++ ;


}
printf("%lld",n-count) ;
return 0 ;
}
