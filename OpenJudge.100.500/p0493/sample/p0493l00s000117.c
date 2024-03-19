#include<stdio.h>
int main(){
  int kane;
  int happy=0;
  
  scanf("%d",&kane);
  
  while(kane>=500){
    kane=kane-500;
    happy=happy+1000;
  }
  
  while(kane>=5){
    kane=kane-5;
    happy=happy+5;
  }
  
  printf("%d",happy);
  
  return 0;
}