#include<stdio.h>
int main(){
  int a,n,b,ans=0;
  scanf("%d%d%d",&n,&a,&b);
  if(a*n>b){
    ans=b;
  }
  else{
    ans=a*n;
  }
  printf("%d\n",ans);
  return 0;
}
