#include <stdio.h>

int main(int argc, char *argv[])
{
  int a, b, i, j;
  int aa[100][100] = {0};
  int bb[100];

  scanf("%d %d",&a, &b);

  for (i = 0; i < a; i++) {
    for (j = 0; j < b; j++) {
      scanf("%d", &aa[i][j]);
    }
  }

  for (i = 0; i < b; i++)
    scanf("%d", &bb[i]);

  for (i = 0; i < a; i++) {
    int t = 0;
    for (j = 0; j < b; j++)
      t += (aa[i][j] * bb[j]);

    printf("%d\n", t);
  }

    return 0;
}