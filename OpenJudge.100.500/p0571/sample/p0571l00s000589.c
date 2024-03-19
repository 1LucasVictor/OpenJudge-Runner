#include<stdio.h>

int main(void){

  int n,a,b;
  int ans;
  
  scanf("%d %d %d", &n,&a,&b);
  
  if(a*n<b) ans=a*n;
  else ans=b;
  
  printf("%d\n",ans);
  
  return 0;
}