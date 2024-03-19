#include<stdio.h>

int main()
{
int a[48444],i,j,k,sum=0,b[49949],c,n,count=0;

scanf("%d %d %d",&c,&n,&k) ;

for(i=0 ; i<c ; i++)
    scanf("%d",&a[i]) ;
for(i=0 ; i<n ; i++)
    scanf("%d",&b[i]) ;
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
printf("%d",count) ;
return 0 ;
}
