#include <stdio.h>
int main(void) {
  int kane,odama,kodama,amari;
  scanf("%d\n",&kane);
  odama = kane/500;
  amari = kane%500;
  kodama = amari/5;
  printf("%d\n",odama*1000+kodama*5);
  return 0;
}