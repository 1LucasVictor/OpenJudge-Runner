#include<stdio.h>

int main(){
  int x;
  int hap=0;
  scanf("%d",&x);
  while(x>=500){
    hap+=1000;
    x-=500;
  }
  
  while(x>=5){
    hap+=5;
    x-=5;
  }
  
  printf("%d",hap);
  
  return 0;
}