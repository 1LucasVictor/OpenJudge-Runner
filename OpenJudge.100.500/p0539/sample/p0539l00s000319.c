#include<stdio.h>
int main()
{
  int n,c=0;
  scanf("%d",&n);
  for(int i=2;i<=9;i++)
  {
    if(n%i==0)
    c++;
  }
  if(c>0)
    printf("Yes");
  else
    printf("No");
  return 0;
}
