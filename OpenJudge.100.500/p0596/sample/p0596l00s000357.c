#include<stdio.h>
//revenge of QUEEEEEEEEEE
int main(){
  char str[100001] = {};
  char stack[100001] = {};
  int stackcnt = 0;
  int n = 0;
  int i = 0;
  scanf(" %s",str);
  for(i=0;;i++){
    if(str[i] == '\0'){
      break;
    }else{
      n++;
    }
  }
  //printf("%d/",n);
  for(i=0;i<n;i++){
    if(stackcnt == 0 || str[i] == stack[stackcnt-1]){
      stack[stackcnt] = str[i];
      stackcnt++;
    }else{
      stackcnt--;
    }
  }
  printf("%d",n-stackcnt);
  return 0;
}