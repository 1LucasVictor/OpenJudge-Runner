#include<stdio.h>

int main(){
  int x,a,b;

  scanf("%d %d %d",&x,&a,&b);

  if(a == b){
    puts("delicious");
  }else{
    if(b - a <= x){
      puts("safe");
    }else{
      puts("dangerous");
    }
  }

  return 0;
}
