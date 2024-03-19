#include <stdio.h>

int main(void) {
  int h = 0;
  int w = 0;
  int i = 0;
  int j = 0;

  scanf("%d", &h);
  scanf("%d", &w);

  while (!((h == 0) && (w == 0))) {
    for(i = 0; i < h; i++) {
      for(j = 0; j < w; j++) {
	if ((i == 0) || (i == (h - 1))) {
	  printf("#");
	} else if ((j == 0) || (j == (w - 1))) {
	  printf("#");
	} else {
	  printf(".");
	}
      }
      printf("\n");
    }

    printf("\n");
          
    scanf("%d", &h);
    scanf("%d", &w);    
  }
  
  return 0;
}