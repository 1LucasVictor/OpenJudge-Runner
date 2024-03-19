#include <stdio.h>

int main(){
   long a,b,c,k,ans;

   scanf("%ld %ld %ld %ld",&a,&b,&c,&k);
   if (k>a) {
      ans=a;
      k-=a;
   } else {
      printf("%ld\n",a);
      return 0;
   }
   if (k>b)
      k-=b;
   else {
      printf("%ld\n",ans);
      return 0;
   }
   if (k>c) printf("%ld\n",ans-c);
   else     printf("%ld\n",ans-k);
   return 0;
}
