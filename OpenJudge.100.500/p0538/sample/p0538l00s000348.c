#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf ("%d %d",&a,&b);
	if(a<1||a>9||b<1||b>9)
    {
      printf("-1\n");
    }
    else
    {
      c=a*b;
      printf("%d",c);
    }
  return 0;
}
