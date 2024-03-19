#include <stdio.h>
int main()
{
  int n,x,i=0;
  scanf("%d",&n);
  while(i<n)
  {
    scanf("%d",&x);
    if(x%2==0&&(x%3!=0&&x%5!=0))
    {
      printf("DENIED");
      return 0;
    }
    i++;
  }
  printf("APPROVED");
  return 0;
}
