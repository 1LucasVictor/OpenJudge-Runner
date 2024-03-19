#include<stdio.h>
int main(){
  int a,b,c;
  scanf ("%d %d %d",&a,&b,&c);
  int ne;
  ne=a-b;
  int ans;
  ans=c-ne;
  if (ans<0){
    ans == 0;
  }
  printf("%d",ans);
  return 0;
}