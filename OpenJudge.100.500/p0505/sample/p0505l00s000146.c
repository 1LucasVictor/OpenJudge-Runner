#include<stdio.h>

int main()
{
  int h,n;
  scanf("%d %d",&h,&n);
  
  int a[n];
  int count=0;
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    count+=a[i];
  }
  
  
  if(h<=count)
  	printf("Yes");
  else
    printf("No");
  
  return 0;
}