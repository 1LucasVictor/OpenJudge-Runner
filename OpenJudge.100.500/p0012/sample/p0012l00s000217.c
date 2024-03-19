#include <stdio.h>
 
int main(){
  int state = 0, num;
  int train[100];
  while(scanf("%d", &num) != EOF){
    if(num != 0){
      train[state] = num;
      state += 1;
    }else{
      state -= 1;
      printf("%d\n", train[state]);
    }
  }
  return 0;
}