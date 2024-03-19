#include<stdio.h>
int main(){
  int m;
  int h=0;
  scanf("%d",&m);
  if(m>500)
  while(m>500){
    m -= 500;
    h += 1000;
  }
  if(m>5)
  while(m>5){
    m -= 5;
    h += 5;
  }
  printf("%d",h);
  
  return 0;
}