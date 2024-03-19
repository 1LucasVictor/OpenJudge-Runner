#include <stdio.h>
int main()
{
  int n,m;
  scanf("%d %d",&n,&m);
  if(n<=9 && m<=9)
  {
	printf("%d\n",n*m);
  }
  else
  {
    printf("-1\n");
  }
  return 0;
}