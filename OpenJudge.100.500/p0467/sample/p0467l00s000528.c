#include<stdio.h>
#include<string.h>

int main()
{
    long long int a,b,c,k,ans,ama ;
    int i,j ;
    long long int count=0 ;
    char s[485878],t[84623] ;
   scanf("%lld %lld %lld %lld",&a,&b,&c,&k) ;
   if(k<=a)
    count=k ;
   else
   {
    while(k!=0)
   {
     k=k-a ;
     count=count+a ;
     for(i=0 ; i<b ;i++)
     {
         k=k-1 ;
         if(k==0)
            break ;
     }
     if(k!=0)
     {
         for(i=0 ; i<c ;i++)
     {
         k=k-1 ;
         count=count-1 ;
         if(k==0)
            break ;
     }
     }

   }

    }
    printf("%lld",count)  ;
return 0 ;
}
