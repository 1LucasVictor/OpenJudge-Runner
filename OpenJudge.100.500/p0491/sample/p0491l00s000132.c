#include <stdio.h>

int main(void)
{
 int n,k;
  
  scanf("%d %d", &n,&k);
  
  if(n%k == 0)
    n = 0;
  else{
    n = n%k;
    int tmp = n;
    n = -1*(n - k);
    
    if(tmp < n)
      n = tmp;
  }
  
  printf("%d", n);
  
  
  return 0;
  
}