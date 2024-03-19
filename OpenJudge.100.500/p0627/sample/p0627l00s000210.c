#include <stdio.h>
int main()
{
   long long int a,b,c[4],i,temp=0;
   scanf("%lld %lld",&a,&b);
   c[0]=a+b;
   c[1]=a-b;
   c[2]=a*b;
   for(i=0;i<3;i++){
    if(c[i]>temp){
        temp=c[i];
    }
   }
   printf("%lld\n",temp);
  return 0;
}