#include<stdio.h>
int main()
{
  int n,m,i,f=0,c,a,b;
  scanf("%d%d",&n,&m);
  int arr[n+1];
  for(i=1;i<=n;i++)
  {
      arr[i]=0;
  }
  for(i=0;i<m;i++)
  {
    scanf("%d%d",&a,&b);
    if(arr[a]!=b && arr[a]==0 && n==1)
    {
        f=1;
        break;
    }
    else if(arr[a]!=b && arr[a]!=0)
    {
      f=1;
      break;
    }
    else if(a==1 && b==0 && n!=1)
    {
      f=1;
      break;
    }
    else
    {
      arr[a]=b;
    }
    c=i;
  }
  if(f==1)
  {
    for(i=c+1;i<m;i++)
      scanf("%d%d",&a,&b);
    printf("-1\n");
  }
  else
  {
    if(arr[1]==0 && n!=1)
    {
        arr[1]=1;
    }
    for(i=1;i<=n;i++)
    {
      printf("%d",arr[i]);
    }
  }
  return 0;
}