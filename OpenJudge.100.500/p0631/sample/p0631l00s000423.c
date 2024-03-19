#include <stdio.h>
 
int main()
{
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if (c > a+b)
    printf("NO");
  else if (c < a)
    printf("NO");
  else
  	printf("YES");
}