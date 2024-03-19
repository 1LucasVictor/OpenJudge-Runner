#include <stdio.h>
int main()
{
  int x,y,z,i,count;

  scanf("%d %d %d",&x,&y,&z);

  count=0;

  for(i=x;i<=y;i++)
  {
    if(z%i==0) count++;
  }

  printf("%d\n",count);
  return 0;
}