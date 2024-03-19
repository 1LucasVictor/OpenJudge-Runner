#include<stdio.h>
#include<math.h>
int main()
{
  int x,y,i,p,q,count=0,cal;
  double s;
  scanf("%d %d",&x,&y);
  for(i=0;i<x;i++)
  {
    scanf("%d %d",&p,&q);
    cal=p*p+q*q;
    s=sqrt(((double)(cal)));
    cal=s;
    if(cal==y)
      count++;
  }
  printf("%d",count);
  return(0);
}