#include <stdio.h>

g(int n){
  for(int i=1;i<10;i++){
    for(int j=1;j<10;j++){
      if(n==i*j){
       return 1;
      }
    }
  }
  return 0;
}
  

int main(){
  int n;
  scanf("%d",&n);
  if(g(n)==1){
    printf("Yes");
  }else{
    printf("No");
  }
}
  