#include <stdio.h>

int main() {
  int enemy_hp;
  int bear_at;
  int num = 0;
  int i;
  scanf("%d", &enemy_hp);
  scanf("%d", &num);
  for (i = 0; i < num; i++) {
    scanf("%ld", &bear_at);
    enemy_hp -= bear_at;
  }
  if (enemy_hp <= 0)
    puts("Yes");
  else
    puts("No");
  return 0;
}