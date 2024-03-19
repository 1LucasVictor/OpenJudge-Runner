#include <stdio.h>
#include <stdlib.h>

int main(){
  long long L, R;
  if(scanf("%ld %ld", &L, &R) == EOF) exit(1);
  
    L = L % 2019;
    R = R % 2019;
  
  long long answer = 0;
  long long min = 2019;
    for(long long i = L; i < R; i++){
      for(long long j = i+1; j < R+1; j++){
        long long a = i*j % 2019;
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

