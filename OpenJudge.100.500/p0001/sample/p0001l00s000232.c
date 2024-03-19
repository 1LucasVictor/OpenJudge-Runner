
#include<stdio.h>
int main(){
 
  int a,b;
  while(scanf("%d %d",&a,&b) != EOF){
  int i = 0;
  a = a + b;
  while(a > 0){
    a = a / 10;
    i++;
      }
 
  printf("%d\n",i);
 
  }
}