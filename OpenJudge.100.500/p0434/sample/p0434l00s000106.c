#include<stdio.h>
int main(){
  int temprature;
  scanf("%d", &temprature);
  if(temprature >= 30){
    puts("Yes");
  }
  else{
    puts("No");
  }
  return 0;
}