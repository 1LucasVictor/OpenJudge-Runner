#include <stdio.h>

int Mod(int L, int R){
  int i, n1, n2, n;
  n1 = L % 2019;
  n2 = (L + 1) % 2019;
  if(R - L >= 2019) return 0;
  for(i = L + 2;i <= R;i++){
    if(n2 > i % 2019){
      n2 = i % 2019;
      if(n1 > n2){
	n = n1;
	n1 = n2;
	n2 = n;
      }
    }
  }
  return n1 * n2 % 2019;
}

int main(void){
  int L, R;
  scanf("%d %d", &L, &R);
  printf("%d\n", Mod(L, R));
  return 0;
}
