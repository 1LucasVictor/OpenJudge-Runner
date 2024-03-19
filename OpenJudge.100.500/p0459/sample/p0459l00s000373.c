#include <stdio.h>

int main(int argc, char const *argv[]) {
  int x, y;
  char input[150];
  fgets(input, 149, stdin);
  sscanf(input, "%d %d", &x, &y);

  int preTsuru, preCameFeet, camex, tsuru;
  preTsuru = x * 2;
  preCameFeet = y - preTsuru;
  if (preCameFeet % 2 != 0 || y % 2 != 0) {
    printf("No\n");
    return 0;
  }
  camex = preCameFeet / 2;
  tsuru = x - camex;
  if (camex < 1 || camex > 100 || tsuru < 1 || tsuru > 100) {
    printf("No\n");
    return 0;
  } else if (camex + tsuru == x) {
    printf("Yes\n");
  }

  return 0;
}
