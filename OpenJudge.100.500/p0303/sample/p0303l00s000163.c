#include <stdio.h>

#define N 100001
#define MAX 10000

int search(int*, int, int, unsigned int, unsigned int);
int getNumPackage(int*, int, int, unsigned int);

int main () {
  int n, k;
  int array[N];

  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) {
    scanf("%d", &array[i]);
  }

  int p = search(array, n, k, 0, n*MAX);

  printf("%d\n", p);
  
  return 0;
}

int search(int* array, int n, int k, unsigned int left, unsigned int right) {
  unsigned int mid;
  while (left < right - 1) {
    mid = (left + right)/2;

    int np = getNumPackage(array, n, k, mid);

    if (np == n) {
      right = mid;
    } else {
      left  = mid;
    }
  }

  return right;
}

int getNumPackage(int* array, int n, int k, unsigned int p) {
  int cnt = 0;
  int weight = 0;
  
  do {
    weight += array[cnt];
    if (weight > p) {
      weight = 0;
      k--;
    } else {
      cnt++;
    }	
  } while (k > 0 && cnt < n);

  return cnt;
}

