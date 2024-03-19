#include <stdio.h>
#include <stdlib.h>
 int main(void) {
  long int n,k;
    scanf("%ld %ld",&n,&k );
   if (n%k>labs(k-n%k)) {
    printf("%ld",labs(k-n%k)) ;
   }
else{
  printf("%ld",labs(n%k) );
}
  return 0;
}
