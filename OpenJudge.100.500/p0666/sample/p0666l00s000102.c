#include<stdio.h>

int main(){
  long int x,a,b;

  scanf("%ld %ld %ld",&x,&a,&b);

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
