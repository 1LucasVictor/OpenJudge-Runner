#include <stdio.h>

int Mod(int L, int R){
  if(L % 2019 > R % 2019 || R - L >= 2019) return 0;
  else return ((L % 2019) * ((L + 1) % 2019)) % 2019;
}  

int main(void){
  int L, R;
  scanf("%d %d", &L, &R);
  printf("%d\n", Mod(L, R));
  return 0;
}
