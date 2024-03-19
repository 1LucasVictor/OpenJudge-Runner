#include<stdio.h>
int main()
{
int a,b,c,i;
  c=0;
  scanf("%d %d",&a,&b);
int d[b];
  for(i=0;i<a;++i)
  {
  scanf("%d",&d[i]);
  c=c+d[i];
  }
  if(c<a) printf("No");
  else printf("Yes");
return 0;
}