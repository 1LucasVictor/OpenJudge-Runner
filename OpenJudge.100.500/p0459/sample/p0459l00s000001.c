#include <stdio.h>

int main(){
  int x,y;
  scanf("%d%d",&x,&y);
  if(x<1||x>100||y<1||y>100){
  puts("No");
  return 0;
}

  for(int i=0;i<x;i++){
    for(int j=0;i+j<x;j++){
      if(2*i+4*j==y){
        puts("Yes");
        return 0;
      }
    }
  }
  puts("No");
  return 0;
}
