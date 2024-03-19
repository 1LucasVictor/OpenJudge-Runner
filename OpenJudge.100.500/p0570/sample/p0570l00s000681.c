#include<stdio.h>
int main ()
{
  int a,b,c,d;
  scanf ("%d %d",&a,&b);

  int i=0;
  while (1)
  {
      i+=1;
      if (abs(a-i) == abs (b-i))
      {
          c=1;
          d=i;
          break;
      }
      else c++;
  }

  if (c == 1)
  {
      printf("%d\n",d);
  }
  else printf("IMPOSSIBLE\n");



    return 0;
}
