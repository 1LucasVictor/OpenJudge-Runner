#include <stdio.h>
int main(void)
{
  long int n,a[200001],b[200001] = {0},i;
  
  scanf("%ld", &n);
  
  for(i=2;i<=n;i++){
    scanf("%ld", &a[i]);
    b[a[i]]++;
  }
  
  for(i=1;i<=n;i++)
     printf("%ld\n" ,b[i]);
  
  return 0;
}