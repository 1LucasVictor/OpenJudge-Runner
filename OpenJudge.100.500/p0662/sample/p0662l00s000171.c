
#include <stdio.h>

int main()
{
  long long int a,b,c,d,max1,max;
  scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
   if( c<b  )
   {
       printf("%lld\n",abs(b-c));
   }else{
       
       printf("0\n");
       
   }
   
    return 0;
}
