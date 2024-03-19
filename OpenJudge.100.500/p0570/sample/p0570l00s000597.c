#include<stdio.h>

int main ()
{
  long int a,b,x;
  scanf ("%ld %ld",&a,&b);
  x=((a+b)/2);
  if ((a+b)%2==0)
  printf ("%ld\n",x);
  else 
  printf ("IMPOSSIBLE\n");
}