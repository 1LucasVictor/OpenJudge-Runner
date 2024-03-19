#include <stdio.h>
int main(){
  int a,b,c,d,r=-1;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  for(int i=0;i<=100;i++)if(a<=i&&i<=b&&c<=i&&i<=d)r++;
  if(r==-1)r=0;
  printf("%d",r);
  return 0;
}