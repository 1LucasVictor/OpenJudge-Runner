#include<stdio.h>
int main()
  {
    int n,a,b,c;
    scanf("%d",&n);
    scanf("%d",&a);
    scanf("%d",&b);
    c=n*a;
    if(c>=b)
      printf("%d",b);
    else
      printf ("%d",c);
  return 0;
  }
  