#include<stdio.h>
int main()
{
  int n,a[200000],i,j,flag=1;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n&&flag;j++)
    {
      if(a[i]==a[j])
        flag=0;
    }
  }
  if(flag)
    printf("YES");
  else 
    printf("NO");
  return 0;
}