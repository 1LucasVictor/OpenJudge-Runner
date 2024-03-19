#include<stdio.h>

int main(){
  int a, b,c;
  scanf("%d %d",&a,&b);
  
  c = a * b;
  
  if(a >= 10 || b >= 10){
    c = -1;
  }
  
  printf("%d",c);
}
  
