#include <stdio.h>

int main(){
   int i, n, a, b, c;
   scanf("%d %d %d",&a,&b,&c);
   for(i=a,n=0;i<b;i++){
      if(c%i==0) ++n;
   }
   printf("%d\n",n);
   return 0;
}