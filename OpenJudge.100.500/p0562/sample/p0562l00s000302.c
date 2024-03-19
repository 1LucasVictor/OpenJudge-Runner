#include <stdio.h>
 
int main(void){
  int a,b;
  int i = 1;
  scanf("%d %d", &a,&b);
  if(a == b){
 
  }else{
    while(a * i < b + 2){
        i++;
    }
  }
  printf("%d\n", i);
  return 0;
}