#include<stdio.h>
int main()
{
  int a,b,c,d;
  scanf("%d",&a);
  b=a/100;
  c=(a-b*100)/10;
  d=a%100-c*10;
   if(d==7)
   {
     printf("Yes");
   }
else if(c==7)
{
  printf("Yes");
}
  else if(b==7)
  {
    printf("Yes");
  }
  else if (d==7)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }
  return 0;
}