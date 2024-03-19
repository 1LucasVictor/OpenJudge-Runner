#include<stdio.h>

int main() {
  int antenna[5], k;
  int flag = 0;
  int i, j;

  for(i = 0; i < 5; i++) {
    scanf("%d", &antenna[i]);
  }
  scanf("%d", &k);

  for(i = 0; i < 5 - 1; i++) {
    for(j = i + 1; j < 5; j++) {
      if(antenna[j] - antenna[i] > k) flag = 1;
    }
  }

  if(flag == 0) printf("Yay!\n");
  else          printf(":(\n");

  return 0;
}
