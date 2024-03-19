#include <stdio.h>

int main(void){
  int n,
      a,b,c,d,
      answer;
  while(feof(stdin) == 0){
    scanf("%d\n",&n);
    answer = 0;
    if(n <= 36){
      for(a = 0;a <= 9;a++){
        for(b = 0;b <= 9;b++){
          for(c = 0;c <= 9;c++){
            for(d = 0;d <= 9;d++){
              if(n == (a + b + c + d)){
                answer++;
              }
            }
          }
        }
      }
    }
    printf("%d\n",answer);
  }
  return 0;
}