#include <stdio.h>

int linear_search(int s[], int n,  int t) {
  for (int i = 0; i < n; i++)
    if (s[i] == t)
      return 1;
  return 0;
}

int main(void) {
  int n ,q;
  int s[10000];
  int t[500];
  int i;
  int count = 0;
  
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &s[i]);
  scanf("%d", &q);
  for (i = 0; i < q; i++)
    scanf("%d", &t[i]);

  for (i = 0; i < q; i++) {
    count += linear_search(s, n, t[i]);
  }

  printf("%d\n", count);
  
  return 0;
}

