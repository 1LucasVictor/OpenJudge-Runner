#include <stdio.h>

int main (void){
  long long int h,n;
  scanf("%lld%lld",&h,&n);
  long long int a[n],sum=0;
  for(long long int i=0;i<n;i++){
    scanf("%lld",&a[i]);
    sum+=a[i];
  }

  if(h<=sum){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}
