#include <stdio.h>
#define N 100000

int main(void)
{
  int n, k, w[N];
  int i, c, sum;
  int right=0, left=0, mid;
  scanf("%d %d", &n, &k);
  for(i=0; i<n; i++){
    scanf("%d", &w[i]);
    right+=w[i];
    if(left<w[i]) left=w[i]-1;
  }
  while(right-left>1){
    c=1;
    sum=0;
    mid=(right+left)/2;
    for(i=0; i<n; i++){
      if(sum+w[i]<=mid) sum+=w[i];
      else{
        c++;
        sum=w[i];
      }
    }
    if(c>k) left=mid;
    else right=mid;
  }
  
  printf("%d\n", right);
  return 0;
}
  
