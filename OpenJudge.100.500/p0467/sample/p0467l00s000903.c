#include<stdio.h>
int main ()
{
   long long int a,b,c,k,i,s;
   scanf("%lld %lld %lld %lld",&a,&b,&c,&k) ;
      if(k>=(a+b)){
       s=a+((-1)*(k-(a+b)));
       printf("%lld\n",s);}
      else{
        if(k==a || k<a)
        printf("%lld\n",k);
        else if (k>a)
            printf("%lld\n",a);
      }
}

