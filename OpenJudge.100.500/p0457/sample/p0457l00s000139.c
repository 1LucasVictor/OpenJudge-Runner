#include<stdio.h>

int main()
{
long long int a[48444],i,j,k,sum=0,b[49949],c,n,count=0;

scanf("%lld %lld %lld",&c,&n,&k) ;

for(i=0 ; i<c ; i++)
    scanf("%lld",&a[i]) ;
for(i=0 ; i<n ; i++)
    scanf("%lld",&b[i]) ;
int d=0 , e=0 ;
   if(a[i]>k && b[i]>k)
   count=0 ;

   else
   {
       for(i=0 ; i<n+c ; i++)
       {


        if(a[d]>k && b[e]>k)
            break ;

      if(a[d]<b[e])
      {
          k=k-a[d] ;
          count++ ;
          d++ ;
      }
      else
      {
          k=k-b[e] ;
          count++ ;
          e++ ;
      }
 }

   }
printf("%lld",count) ;
return 0 ;
}
