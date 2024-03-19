int main() {
  int n, m, l;
  scanf("%d %d %d\n", &n, &m, &l);

  int a[100 * 100];
  for (int i = 0; i < n * m; i++) {
    scanf("%d", &a[i]);
  }

  int b[100 * 100];
  for (int i = 0; i < m * l; i++) {
      scanf("%d", &b[i]);
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l; j++) {

      long c = 0;
      for (int k = 0; k < m; k++) {
        c += a[i * m + k] * b[k * l + j];
      }
      printf("%ld", c);

      if (j < l - 1) {
        putchar(' ');
      } else {
        putchar('\n');
      }

    }
  }
}
