#include<stdio.h>
#include<stdlib.h>

int max(int a,int b){
  if(a > b) return a;
  else return b;
}
int min(int a, int b){
  if(a < b) return a;
  else return b;
}

int main(){

  int n;
  scanf("%d",&n);

  if( n%10 ==2 ){
    puts("hon");
  }
    if( n%10 ==4 ){
    puts("hon");
  }
    if( n%10 ==5 ){
    puts("hon");
  }
    if( n%10 == 7 ){
    puts("hon");
  }
    if( n%10 ==9){
    puts("hon");
  }
    if( n%10 ==0){
    puts("pon");
  }
      if( n%10 == 1 ){
    puts("pon");
  }
      if( n%10 ==6 ){
    puts("pon");
  }
      if( n%10 ==8){
    puts("pon");
  }
    if( n%10 ==3){
    puts("bon");
  }

  return 0;
}