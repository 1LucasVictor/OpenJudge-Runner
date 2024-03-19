#include<stdio.h>
int main()
{
  int n,i,a[200000],v[200000]={0};
  scanf("%d",&n);
  for(i=2;i<=n;i++){
    scanf("%d",&a[i]);
    v[a[i]]++;
  }
  for(i=1;i<=n;i++)
    printf("%d\n",v[i]);
  return 0;
}
