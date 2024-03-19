#include <stdio.h>

int main()
{
    long long int h,n;
  scanf("%lld %lld\n",&h,&n);
  long long int i,arr[n],sum=0;
  for(i=0;i<n;i++)
  {
    scanf("%lld ",&arr[i]);
    sum=arr[i]+sum;
    
  }
  if(sum>=h)
    printf("Yes");
  else
    printf("No");
  
    

    return 0;
}