#include<stdio.h>

int main(void)

{

  int x, y, z, a, b, c, s, t;

  scanf("%d", &s);
  for (t=0;t<s;t++)
    {

  scanf("%d %d %d", &x, &y, &z);


  a = x*x + y*y;
  b = y*y + z*z;
  c = z*z + x*x;

  if(a==z*z || b==x*x || c==y*y) printf("YES\n");

  else printf("NO\n");

    }  


  return 0;

}