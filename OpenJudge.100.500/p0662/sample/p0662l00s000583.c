#include<stdio.h>

int main(){
  int a,b,c,d;
  int timeMin,timeMax;
  
  scanf("%d %d %d %d",&a,&b,&c,&d);
  
  if(a<c){
    timeMin = c;
  }
  else{
    timeMin = a;
  }
  if(b<d){
    timeMax = b;
  }
  else{
    timeMax = d;
  }
  if(timeMax-timeMin > 0){  
    printf("%d",timeMax-timeMin);
  }
  else{
    printf("0");
  }
  return 0;
}