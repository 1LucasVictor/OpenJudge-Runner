#include <stdio.h>

int main()
{
  int a,b,c,d,e,k;
  int t=0;
  scanf("%d\n%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e,&k);

  if(e-a>15 || d-a>15 || c-a>15 || b-a>15)
    t=1;

  if(c-b>15||d-b>15||e-b>15||d-c>15||e-c>15||e-d>15)
    t=1;

  if(t==0)
    printf("Yay!");

  if(t==1)
    printf(":(");

      return 0;
}