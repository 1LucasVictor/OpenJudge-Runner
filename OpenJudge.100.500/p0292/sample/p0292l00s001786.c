# include <stdio.h>

void bubbleSort(int a[], int n) {
  int count;
  int s;

  for (int i = 0; i < n; i++) {
    for(int j = n - 1; j > i; j--) {
      if (a[j - 1] > a[j]) {
        // swap
        s = a[j - 1];
        a[j - 1] = a[j];
        a[j] = s;
        count++;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    if (i == n - 1) {
      printf("%d", a[n - 1]);
    } else {
      printf("%d ", a[i]);
    }
  }
  printf("\n");
  printf("%d", count);
}

int main() {
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  bubbleSort(a, n);

  return 0;
}

