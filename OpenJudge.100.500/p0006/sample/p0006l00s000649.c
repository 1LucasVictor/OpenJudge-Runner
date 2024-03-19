#include<stdio.h>
int main(){
  int ans=100000;
  int n;
  int i;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    ans=ans*0.05+ans;
    ans+=999;
    ans/=1000;
    ans*=1000;
  }
  printf("%d\n",ans);
  return 0;
}