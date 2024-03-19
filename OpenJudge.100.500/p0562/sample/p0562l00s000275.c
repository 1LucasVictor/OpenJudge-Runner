#include <stdio.h>
 
int main(void){
  int a,b;
  int i = 1;
  scanf("%d %d", &a,&b);
  if(b == 1){
      i = 0;
  }else if(a > b){

  }else{
    while(a * i - i  + 1< b){
        i++;
    }
  }
  printf("%d\n", i);
  return 0;
}