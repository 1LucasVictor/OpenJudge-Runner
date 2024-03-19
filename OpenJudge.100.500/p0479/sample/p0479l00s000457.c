#include <stdio.h>
#define MIN(x,y) (((x) > (y)) ? (y) : (x))
#define ABS(x) ((x) >= 0 ? (x) : (-(x)))

int b[200001];
int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n - 1; i++) {
    int a;
    scanf("%d", &a);
    b[a-1]++;
  }
  for (int i = 0; i < n; i++) {
    printf("%d\n", b[i]);
  }
  return 0;
}