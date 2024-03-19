#include <stdio.h>
int main(void) {
  int n,x,y,a,d,c;
  n=0;
  x=0;
  y=0;
  d=0;
  a=0;
  c=0;
  scanf("%d",&n);
  scanf("%d",&d);
  for(a=0;a<n;a++)
  {
    scanf("%d",&x);
    scanf("%d",&y);
    if(x*x+y*y<=d*d)
    {
      c++;
    }
  }
  printf("%d\n",c);
}
