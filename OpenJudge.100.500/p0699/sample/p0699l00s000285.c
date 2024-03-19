#include<stdio.h>
int main(){
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  if(17==a+b+c&&175==a*b*c){
    printf("YES");}
  else{
    printf("NO");}
  return 0;
}