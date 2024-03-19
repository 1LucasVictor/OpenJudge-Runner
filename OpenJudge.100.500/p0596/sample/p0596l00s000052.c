#include<stdio.h>

int main()
{
  int cin;
  int r = 0, b = 0;

  while ((cin = getchar()) != EOF) {
    if (cin == '0') {
      r++;
    } else if (cin == '1') {
      b++;
    }
  }

  if (r < b) {
    printf("%d\n", r * 2);
  } else {
    printf("%d\n", b * 2);
  }

  return 0;
}
