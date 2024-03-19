#include <stdio.h>
#include <stdlib.h>
 int main(void) {
  long int n,k;
    scanf("%ld %ld",&n,&k );
   if (n%k>(n%k-k)) {
    printf("%ld",labs(n%k-k)) ;
   }
else{
  printf("%ld",labs(n%k) );
}
  return 0;
}
