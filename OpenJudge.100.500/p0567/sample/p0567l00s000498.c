#include<stdio.h>
int main(){
  int a,b,c;
  int count;
  int ans;
  scanf("%d %d %d",&a,&b,&c);
  count=a-b;
  if(count<c){
    ans=c-count;
  }
  else ans=0;
  
  printf("%d",ans);
  return 0;
}