#include <stdio.h>
#include <stdlib.h>

int main(){
  int L, R;
  if(scanf("%d %d", &L, &R) == EOF) exit(1);
  
  while(L > 2019 || R > 2019){
    L = L % 2019;
    R = R % 2019;
  }
  
  int answer = 0;
  int min = 2019;
  if(R*(R-1) < 2019) answer = L*(L+1);
  else{
    for(int i = L; i < R; i++){
      for(int j = L+1; j < R+1; j++){
        int a = i*j % 2019;
        if(a < min) min = a;
      }
    }
    answer = min;
  }
    
  
  printf("%d", answer);
  return 0;
}