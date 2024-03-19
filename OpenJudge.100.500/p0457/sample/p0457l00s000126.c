#include <stdio.h>

int main(void) {
  int n, m, k;
  scanf("%d%d%d", &n, &m, &k);
  int a[200000] = {0}, b[200000] = {0};
  for (int i = 0;i < n;i++) {
    scanf("%d", a + i);
  }
  for (int i = 0;i < m;i++) {
    scanf("%d", b + i);
  }
  int act = 0, bct = 0;
  long time = 0;
  int count = 0;
  do {
    count++;
    long t;
    if(act == n && bct == m) break;
    else if(act == n) t = b[bct++];
    else if(bct == m) t = a[act++];
    else t = a[act] < b[bct] ? a[act++] : b[bct++];
    time += t;
  }while(time < k);
  printf("%d\n", time == k ? count : count - 1);
  return 0;  
}
