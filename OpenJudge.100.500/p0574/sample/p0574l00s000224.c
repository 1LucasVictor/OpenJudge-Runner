#include<stdio.h>

int main(){
  int s;
  
  scanf("%d",&s);
  
  if(s / 1000 == (s % 1000) / 100)
    printf("Bad");
  else if((s % 1000) / 100 == (s % 100) / 10)
    printf("Bad");
  else if((s % 100) / 10 == s % 10)
    printf("Bad");
  else
    printf("Good");
  
}
    
    
  