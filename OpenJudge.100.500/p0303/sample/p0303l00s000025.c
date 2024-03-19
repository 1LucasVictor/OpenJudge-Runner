#include <stdio.h>

int get_uint() {
  int n = 0;
  int c = getchar_unlocked();
  if(c < 48 || 57 < c) return c;
  while(47 < c && c < 58) {
    n = 10 * n + (c & 0xf);
    c = getchar_unlocked();
  }
  return n;
}
void put_uint(int n) {
  if(!n) {
    putchar_unlocked('0');
    return;
  }
  char buf[11];
  int i = 0;
  while(n) buf[i++] = (char)(n % 10 + '0'), n /= 10;
  while(i--)putchar_unlocked(buf[i]);
}

// ret-> loadable ? 1 : 0
int loadable_num(const int cap, int qty, const int *arr, const int N) {
  int i = 0;
  // while truck exist
  while(qty--) {
    int now = 0;
    // while there is enough capacity for next package
    while(arr[i] + now <= cap) {
      now += arr[i];
      // N -> loaded all package
      if(++i == N) return 1;
    }
  }
  return 0;
}
int main(int argc, char **argv) {
  int n = get_uint();
  int k = get_uint();
  int w[100001];
  for(int i = 0; i < n; ++i) w[i] = get_uint();

  int left = 0;
  // MAX cap
  int right = 10000 * 100000;
  int mid;
  // binary search
  while(right - left > 1) {
    mid = left + (right - left) / 2;
    // enough cap
    if(loadable_num(mid, k, w, n)) right = mid;
    // couldn't load all
    else left = mid;
  }
  put_uint(right);
  putchar_unlocked('\n');
}

