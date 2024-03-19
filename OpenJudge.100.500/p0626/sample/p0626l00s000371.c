#include <stdio.h>
int main(){
  int n,d,i,ringo=1;
  scanf("%d %d",&n,&d);
  
  for(i=0;i<n;i++){
    ringo*=100;
  }
  
  printf("%d",ringo*d);
}