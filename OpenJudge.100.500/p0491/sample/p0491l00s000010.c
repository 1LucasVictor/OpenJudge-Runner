#include<stdio.h>
#include<stdlib.h>
 int main(void) {
   int i,n,k;
      scanf("%d %d",&n,&k );
   for (i=0;abs(n)>abs(n-k);i++) {
  n=abs(n-k);
   }
   printf("%d",n );

  return 0;
}
