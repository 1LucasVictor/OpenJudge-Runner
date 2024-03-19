#include <stdio.h>

static 
void printfig(int h, int w, int y, int x)
{
  if (x == 0 || y == 0 || x == (w - 1) || y == (h - 1))
    printf("#");
  else
    printf(".");
}

int main(int argc, char *argv[])
{
  int w[300], h[300];
  int i, j;

  for (i = 0; i < 300; i++) {
    scanf("%d %d", &h[i], &w[i]);
    if (w[i] == 0 && h[i] == 0)
      break;
  }

  for (j = 0; j < i; j++) {
    int k, n;
    for (k = 0; k < h[j]; k++) {
      for (n = 0; n < w[j]; n++) {
	printfig(h[j], w[j], k, n);
      }
      
      printf("\n");
    }
    printf("\n");
  }

  return 0;
}