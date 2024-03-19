#include<stdio.h>
int sum(int a,int b){
  
  if(a*b%2==0)
    return "Even";
  else 
    return "Odd";
}
int main(){
  int a,b;
  scanf("%d %d", &a,&b);
  printf("%s",sum(a,b));
  return 0;
}
