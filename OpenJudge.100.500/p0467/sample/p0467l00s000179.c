#include<stdio.h>
#include<stdlib.h>
#include<math.h> 
int main()
 { 
    long long a,b,c,k,sum=0; 
    scanf("%lld%lld%lld%lld",&a,&b,&c,&k); 
    if(a>=k || (a+b)>=k) 
    printf("%lld",a);
    else 
    { 
      k=k-(a+b);
      sum=a-k;
      printf("%lld",sum); 
      }
      return 0;
  }


      
      
