#include<stdio.h>
int main()
{
  int h,n,s=0,i,t;
  scanf("%d%d",&h,&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&t);
    s += t;
    if(s >= h)
    {
      printf("Yes\n");
      return 0;
    }
  }
  printf("No\n");
  return 0;
}
    