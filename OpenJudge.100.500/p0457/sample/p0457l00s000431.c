#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main() {
  int n, m, k;
  scanf("%d %d %d", &n, &m, &k);

  int a[200000];
  int b[200000];
  int i;
  for(i = 0; i < 200000; i++) {
    a[i] = b[i] = 0;
  }
  for(i = 0; i < n; i++) {
    if(i != n-1) scanf("%d ", &a[i]);
    else scanf("%d", &a[i]);
  }
  for(i = 0; i < m; i++) {
    if(i != m-1) scanf("%d ", &b[i]);
    else scanf("%d", &b[i]);
  }

  int count =0;
  long time = 0;
  int p,q;
  p = q = 0;
  while(time<k) {
    if(time > 1000000000) {
      printf("0");
      return 0;
    }
    if(a[p] != 0) {
      if(b[q] != 0) {
        if(a[p] >= b[q]) {
          time += b[q];
          if(time > k) {
            time -=b[q];
            break;
          }
        count++;
        q++;
      } else if(a[p] < b[q]) {
        time += a[p];
        if(time > k) {
          time -= a[p];
          break;
        }
        count++;
        p++;
    }
  } else if(b[q] == 0) {
    time += a[p];
    if(time > k) {
      time -= a[p];
      break;
    }
    count++;
    p++;
    }
  } else if(a[p] == 0) {
    time += b[q];
    if(time > k) {
      time -= b[q];
      break;
    }
    count++;
    q++;
    }
    //printf("p:%d q:%d\n", p,q);
    //printf("p:%d q:%d\n", a[p],b[q]);
  }
  printf("%d",count);
  return 0;
}
