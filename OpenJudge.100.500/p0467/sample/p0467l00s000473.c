#include<stdio.h>
int main(){
  int a,b,c,k,ans;
  scanf("%d %d %d %d",&a,&b,&c,&k);
  if(k<=a+b){ans=a;}
  if(k>a+b){ans=a-(k-a-b);}
  printf("%d\n",ans);
}