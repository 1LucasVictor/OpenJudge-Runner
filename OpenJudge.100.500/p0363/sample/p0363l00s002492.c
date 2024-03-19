#include <stdio.h>
 
main()
{
  int x[3], i, j, tmp;
 
  scanf("%d %d %d", &x[0], &x[1], &x[2]);
   
  for (i = 0; i < 2; i++) {
    for (j = i + 1 ; j < 3 ; j++) {
      if (x[i] > x[j]) {
    tmp = x[i];
    x[i] = x[j];
    x[j] = tmp;
      }
    }
  }
       
 
  printf("%d %d %d\n", x[0], x[1], x[2]);
 
  return 0;
}