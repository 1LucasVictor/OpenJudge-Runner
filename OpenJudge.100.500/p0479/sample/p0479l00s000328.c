#include <stdio.h>

const int N = 2e5 + 1;

int main()
{
  int arr[N];
  memset(arr, 0, sizeof arr);
  int n, i, x;
  if(scanf("%d", &n)) {
    for(i = 1; i < n; ++i) {
      if(scanf("%d", &x))
      	arr[x]++;
    }
  }
  for(int i = 1; i <= n; ++i) {
    printf("%d\n", arr[i]);
  }
  return 0;
}
