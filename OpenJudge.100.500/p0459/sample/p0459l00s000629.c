#include<stdio.h>

int main(){
  
  int i;
  int a,x,y;
  
  scanf("%d%d",&x, &y);
  
  for(i = 0; i < 101; i++){
    
    a = 2*i + 4*(x - i);
    
    if(a == y){
      printf("Yes\n");
      return 0;
    }
  }
  
  printf("No\n");
  return 0;
        
}