#include <stdio.h>

int main()
{
 int i, j, x, y;
 scanf("%d%d", &x, &y);
 while(x != 0 && y != 0) {

  for(i = 0; i < y; i++) {
   printf("#");
  }
  printf("\n");
  for(i = 0; i < x - 2; i++) {
   printf("#");
   for(j = 0; j < y - 2; j++) {
    printf(".");
   }
   printf("#\n");
  }
  for(i = 0; i < y; i++) {
   printf("#");
  }
  printf("\n");
  printf("\n");
  scanf("%d%d", &x, &y);
 }
 return 0;
}
 