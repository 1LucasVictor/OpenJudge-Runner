#include <stdio.h>
#include <stdlib.h>

int main(){
  long L, R;
  if(scanf("%ld %ld", &L, &R) == EOF) exit(1);
  
    L = L % 2019;
    R = R % 2019;
  
  long min = 2018;
    for(long i = L; i < R; i++){
      for(long j = i+1; j < R+1; j++){
        long a = (i*j) % 2019;
        if(a == 0){
          printf("%ld", a);
          return 0;
        }
        if(a < min) min = a;
      }
    }
  //if(answer == 2019) answer = 0;
  
  printf("%ld", min);
  return 0;
}

