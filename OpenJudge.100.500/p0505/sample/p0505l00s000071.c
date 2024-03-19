#include<stdio.h>
int main()
{
  int h,n,sum=0,a,i;
  scanf("%d",&h,&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a);
    sum+=a;
  }
  if(sum>=h)
    printf("Yes");
  else
    printf("No");
  return 0;
}