#include<stdio.h>
int main(){
  int m;
  int h=0;
  scanf("%d",&m);
  while(m>500){
    m -= 500;
    h += 1000;
  }
  while(m>5){
    m -= 5;
    h += 5;
  }
  printf("%d",h);
  
  return 0;
}