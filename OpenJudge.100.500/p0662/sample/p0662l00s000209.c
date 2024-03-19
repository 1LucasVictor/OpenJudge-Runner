#include<stdio.h>
int main()
{
int a,b,c,d;
scanf("%d%d%d%d",&a,&b,&c,&d);

int maxs,minf;
  if(a<c) maxs=c;
  else maxs=a;
  
  if(b<d) minf=b;
else minf=d;
  
  
  if(maxs<minf) printf("%d",minf-maxs);
  else printf("0");
  
return 0;
}