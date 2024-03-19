#include <stdio.h>

int main(void)
{
 int n,k,ans;
  
  scanf("%d %d", &n, &k);
  
  if(n%k == 0){
    ans = 0;
  }else{
    ans = n%k;    
    if(ans > k-(n%k))
      ans = k-(n%k);
  }
  
  printf("%d", ans);
  
  
  return 0;
  
}