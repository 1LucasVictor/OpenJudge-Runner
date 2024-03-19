#include <stdio.h>
#include <stdlib.h>

int main(void){
  int n, i, j, num;
  while((scanf("%d",&n)) != EOF){
    num = 1;
    if(n==0) //???????????°??¨?????¶??????
      break;
    for(i = 2; i <= n; i++){
      for(j = 2; j < n; j++){
        if(i % j == 0){
          break;
        }
        else if(j > i/2){
          num++;
          break;
        }
      }
    }
    printf("%d\n",num);
  }
  return 0;
}