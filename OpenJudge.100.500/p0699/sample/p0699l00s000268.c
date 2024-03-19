#include<stdio.h>

int main()
{
  int a,b,c;
  
  scanf("%d %d %d",&a,&b,&c);
  
  int sum=a+b+c;
  
  if(sum==17)
  {
    if(a==5&&b==5)
    {
      printf("YES\n");
    }
    else if(a==5&&c==5)
    {
      printf("YES\n");
    }
    else if(b==5&&c==5)
    {
      printf("YES\n");
    }
    else
    {
      printf("NO\n");
    }
  }
   else
  {
    printf("NO\n");
  }
  
  return 0;
}
