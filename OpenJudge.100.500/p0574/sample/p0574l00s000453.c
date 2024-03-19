#include<stdio.h>
int main(){
  int s;
  scanf("%d",&s);
  int a,b,c,d;
  a=s%10;
  b=(s/10)%10;
  c=(s/100)%10;
  d=(s/1000)%10;   
  if(a==b||b==c||c==d){
    printf("Bad");
  }
  else{
    printf("Good");
  }
  return 0;
}