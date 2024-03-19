#include <stdio.h>
int main(void) {
  long n,x,y,a,d,c;
  n=0;
  x=0;
  y=0;
  d=0;
  a=0;
  c=0;
  scanf("%ld",&n);
  scanf("%ld",&d);
  for(a=0;a<n;a++)
  {
    scanf("%ld",&x);
    scanf("%ld",&y);
    if(x*x+y*y<=d*d)
    {
      c++;
    }
  }
  printf("%ld\n",c);
}
