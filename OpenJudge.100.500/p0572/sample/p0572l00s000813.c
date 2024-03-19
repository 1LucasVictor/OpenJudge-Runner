#include<stdio.h>
int main(){
  int i, j, cal, min = 2018;
  int L, R;
  scanf("%d %d", &L, &R);
    for(i = L; i < R; i++){
      for(j = i+1; j <= R; j++){
        cal = (i*j)% 2019;
        if(cal < min){
          min = cal;
        }
      }
    }
  printf("%d", min);
}