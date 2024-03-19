#include<stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  while(a)
  {
      if(a%10==7) {printf("Yes\n"); break; }
      a/=10;
  }
  if(a==0)
    printf("No\n");
    return 0;
}
