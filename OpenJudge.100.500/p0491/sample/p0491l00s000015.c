#include <stdio.h>
#include <stdlib.h>

int main(){
  long int n, k, i;
  scanf("%ld %ld", &n, &k);
  
  if (n < k) {
    printf("%ld", n);
  	return(0);
  }

  i = n / k;
  if (labs(n - i*k) <= labs(n - (i+1)*k)) {
    n = labs(n - i*k);
    printf("%ld", n);
  }
  else if (labs(n - i*k) > labs(n - (i+1)*k)) {
    n = labs(n - (i+1)*k);
    printf("%ld", n);
  }
  
  return(0);
}
