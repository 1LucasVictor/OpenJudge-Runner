#include<stdio.h>
int main()
{
  int n,c=0;
  scanf("%d",&n);
  for(int i=1;i<=9;i++)
  {
    if(n%i==0)
    c++;
  }
  if(c>1)
    printf("Yes");
  else
    printf("No");
  return 0;
}