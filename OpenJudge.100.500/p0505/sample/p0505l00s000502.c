#include <stdio.h>
main()
{
  int h,n,s=0;
  scanf("%d%d",&h,&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    s=s+a[i];
  }
  if(h<=s)
  {
    printf("Yes\n");
  }
  else
  {
     printf("No\n");
  }
  return 0;
}
