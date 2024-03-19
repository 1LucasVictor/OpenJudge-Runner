#include <stdio.h>
#include <stdlib.h>

int main(){
  long int n, k, i;
  scanf("%ld %ld", &n, &k);
  
  if (n < k)
    printf("%ld", n);
    
  i = n / k;
  if (n - i*k < labs(n - 2*i*k))
    printf("%ld", n - i*k);
  else if (n - i*k > labs(n - 2*i*k))
    printf("%ld", labs(n - 2*i*k));
  
  return(0);
}