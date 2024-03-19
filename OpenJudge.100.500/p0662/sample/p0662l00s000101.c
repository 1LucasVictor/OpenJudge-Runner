#include<stdio.h>
int main(void){
  int a,b,c,d,ans=0,l[100]={0},i;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  for(i=a;i<b;i++)l[i]++;
  for(i=c;i<d;i++)l[i]++;
  for(i=0;i<100;i++)if(l[i]==2)ans++;
  printf("%d",ans);
  return 0;
}