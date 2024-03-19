#include <stdio.h>
#include <stdlib.h>
int main(){
  int n,m,key,wee;
  scanf("%d %d",&n,&m);
  key=n%m;
  wee=abs(m-key);
  if(abs(n)<=key){
    if(abs(n)<=wee){
      printf("%d",n);
    }else{
      printf("%d",wee);
    }
  }else{
    if(key<=wee){
      printf("%d",key);
    }else{
      printf("%d",wee);
    }
  }
  return 0;
}