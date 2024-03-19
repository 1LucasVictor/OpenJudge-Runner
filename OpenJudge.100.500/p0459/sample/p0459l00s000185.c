#include<stdio.h>
int main()
{
  int a[2],i;
  for(i=0;i<2;i++)
  scanf("%d",&a[i]);
  if(a[0]==0 && a[1]==0)
    printf("Yes");
  
  else if(a[1]!=0 && a[1]%2==0)
  {
    if(a[1]<=4*a[0])
      printf("Yes");
    else
      printf("No");
  }
  else
    printf("No");
  return 0;
}
        
