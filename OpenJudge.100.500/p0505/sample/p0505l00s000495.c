#include<stdio.h>
int main()
{
  int h,n;
  int all[100006];
  int max=-2;
  scanf("%d %d",&h,&n);
  for(int i = 1;i<=n;i++)
    scanf("%d",&all[i]);
  for(int i = 1;i<=n;i++)
  {
    if(all[i]>max)
      max=all[i];
  }
  
  if(max*2>=h)
    printf("Yes");
  else
    printf("No");
  
  return 0;
}