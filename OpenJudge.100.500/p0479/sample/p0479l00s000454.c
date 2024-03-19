#include <stdio.h>
int main(void)
{
  int n;
  scanf("%d",&n);
  int a[n],b[n],i;
  for(i=1;i<n;i++){
    scanf("%d",&a[i]);
    b[a[i]-1]++;
  }
  for(i=0;i<n;i++)
    printf("%d\n",b[i]);
  
  return 0;
}