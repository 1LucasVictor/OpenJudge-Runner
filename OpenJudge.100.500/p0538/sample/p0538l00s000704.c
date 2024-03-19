#include<stdio.h>
int main(){
  int a,b,ans;
  scanf("%d""%d",&a,&b);
  if(a > 9){
    ans = -1;
  }
  else if(b > 9){
    ans = -1;
  }
  else{
    ans = a*b;
  }
  printf("%d",ans);    
}