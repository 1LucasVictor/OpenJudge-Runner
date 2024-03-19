#include <stdio.h>
#include <stdlib.h>

int main(void){
  int c, N, i, j, k;
  int x[3];
  char tmp[5];

  i = 0;
  while(( c = getchar()) != '\n'){
    tmp[i++] = c;
  }
  tmp[i] = '\0';
  N = atoi(tmp);
  for(k = 0; k < N; k++){
    i = 0;
    for(j = 0; j < 3; j++){
      while(( c = getchar()) != ' ' && c != '\n' && c != EOF){
        tmp[i++] = c;
      }
      tmp[i] = '\0';
      x[j] = atoi(tmp);
      i = 0;
    }
    if(x[0] <= x[1] && x[2] <= x[1]){
      if(x[0] * x[0] + x[2] * x[2] == x[1] * x[1]){
        printf("YES\n");
      }
      else{
        printf("NO\n");
      }
    }
    else if(x[1] <= x[0] && x[2] <= x[0]){
      if(x[2] * x[2] + x[1] * x[1] == x[0] * x[0]){
        printf("YES\n");
      }
      else{
        printf("NO\n");
      }
    }
    else if(x[0] <= x[2] && x[1] <= x[2]){
      if(x[0] * x[0] + x[1] * x[1] == x[2] * x[2]){
        printf("YES\n");
      }
      else{
        printf("NO\n");
      }
    }
  }
  return 0;
}