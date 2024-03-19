#include <stdio.h>

int main(void) {
  int L, R;
  scanf("%d %d", &L, &R);

  int Lmod = L % 2019;
  int Rmod = R % 2019;
  if(Rmod <= Lmod) {
    printf("0\n");
    return 0;
  } else {
    int min = 2019;
    for(int i = Lmod; i <= (Rmod-1); i++) {
      for(int j = i+1; j <= Rmod; j++) {
	int tmp = (i * j) % 2019;
	min = (min < tmp) ? min : tmp;
      }
    }
    printf("%d\n", min);
  }
  return 0;
}
