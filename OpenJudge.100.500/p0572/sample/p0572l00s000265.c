#include <stdio.h>
#include <stdlib.h>

int main(){
  long L, R;
  if(scanf("%ld %ld", &L, &R) == EOF) exit(1);
  
  while(L >= 2019 || R >= 2019){
    L = L % 2019;
    R = R % 2019;
  }
  
  long answer = 0;
  long min = 2020;
  if(R*(R-1) < 2019) answer = L*(L+1);
  else{
    for(long i = R; i > L; i--){
      for(long j = i-1; j > L-1; j--){
        if(i*j < 2019) break;
        long a = i*j % 2019;
        if(a < min) min = a;
      }
    }
    answer = min;
  }
  if(answer == 2019) answer = 0;
  
  printf("%ld", answer);
  return 0;
}

