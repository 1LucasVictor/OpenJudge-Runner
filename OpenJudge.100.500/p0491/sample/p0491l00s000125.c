#include <stdio.h>
#include <stdlib.h>

int main(){
  long int n, k, i;
  scanf("%ld %ld", &n, &k);
  
  if (n < k)
    printf("%ld", n);
    
  i = n / k;
  if (labs(n - i*k) <= labs(n - (i+1)*k))
    printf("%ld", n - i*k);
  else if (labs(n - i*k) > labs(n - (i+1)*k))
    printf("%ld", labs(n - (i+1)*k));
  
  return(0);
}