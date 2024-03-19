#include <stdio.h>

int main(void) {
  int a,b,c,k,i,j,z,ans;
  a=0;
  b=0;
  c=0;
  k=0;
  i=0;
  j=0;
  z=0;
  ans=0;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&k);
  i=k-(a+b);
  z=k-(a+b+c);
  if(a>k)
  a=k;
  
  for(z=0;z<a;z++)
  {
      ans++;
  }
  for(z=0;z<i;z++)
  {
      ans=+0;
  }
  for(z=0;z<j;z++)
  {
      ans=-1;
  }
  printf("%d",ans);
  
  return 0;
}