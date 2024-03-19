#include <stdio.h>
#include <math.h>
#define TIME 0.5

int main(void){
  // 自分の得意な言語で
  // Let's チャレンジ！！
  float bisket_t;
  unsigned int biskets;
  float real_time;
  unsigned int total_biskets;
  scanf("%f %d %f", &bisket_t, &biskets, &real_time);
  unsigned int calc_biskets = floor((real_time + TIME ) / bisket_t);
  
  if(calc_biskets == 0) {
    printf("0\n");
  } else if(calc_biskets > 0) {
    printf("%d\n", calc_biskets * biskets);
  }
  return 0;
}