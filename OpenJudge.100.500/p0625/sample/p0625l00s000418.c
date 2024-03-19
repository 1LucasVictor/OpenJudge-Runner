#include <stdio.h>

int main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  int ans=a+b;
  if(ans%2!=0)
  {  
  if(a<=(ans/2+1) && b<=(ans/2+1))
      printf("Yay!");
  
  else
      printf(":(");
  }
  
  else
  { if(a<=(ans/2) && b<=(ans/2))
      printf("Yay!");
  
  else
      printf(":(");
  }
}