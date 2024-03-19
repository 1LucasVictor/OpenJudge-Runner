#include <stdio.h>
void call(int n){
  for(int i=1;i<=n;i++){
    int x=i;
    if(x % 3 == 0){
      printf(" %d",i);
    }else if(x % 10 == 3){
      printf(" %d",i);
    }else{
      x /= 10 ;
      while(x){
        if(x % 10 == 3){
          printf(" %d",i);
          x=0;
        }else{
          x /= 10;
        }
      }
    }
  }
}
int main(){
  int n;
  scanf("%d",&n);

  call(n);
  printf("\n");
}

