#include <stdio.h>

int main()
{
  int a,b,c,d,e,k;
  int t=0;
  scanf("%d\n%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e,&k);

  if(e-a>k || d-a>k || c-a>k || b-a>k)
    t=1;

  if(c-b>k||d-b>k||e-b>k||d-c>k||e-c>k||e-d>k)
    t=1;

  if(t==0)
    printf("Yay!");

  else if(t==1)
    printf(":(");
  
  return 0;
}