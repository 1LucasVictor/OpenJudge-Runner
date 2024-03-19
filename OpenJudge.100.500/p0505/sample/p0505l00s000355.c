#include<stdio.h>
int main()
{
  int h,n;
  scanf("%d%d",&h,&n);
  int array[n];
  int sum=0;
  for(int i=0;i<n;i++)
  {
    scanf("%d",&array[i]);
    sum+=array[i];
  }
  if(sum>=h)
    printf("Yes\n");
  else
    printf("No\n");
}