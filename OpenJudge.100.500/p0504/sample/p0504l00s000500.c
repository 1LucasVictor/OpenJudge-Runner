#include <stdio.h>

void main() {
  int enemy_hp;
  int serval_at;
  int num = 0;
  scanf("%d", &enemy_hp);
  scanf("%d", &serval_at);
  while (enemy_hp>0) {
    enemy_hp -= serval_at;
    num++;
  }
  printf("%d", num);
}