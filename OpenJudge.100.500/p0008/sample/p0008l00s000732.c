#include<stdio.h>
 
const int MAX_V = 1000000;
int data[999999], sum[1000000];
 
int main() {
  int i, k, n;
  for(i = 2; i < MAX_V; i++) {
    data[i] = 1;   
  }
  for(i = 2; i * i < MAX_V; i++) {
    if(data[i] == 1) {
      for(k = 2 * i; k < MAX_V; k += i) {
        data[k] = 0;
      }
    }
  }
  for(i = 2; i < MAX_V; i ++) {
    sum[i + 1] = sum[i] + data[i];
  }
  while(scanf("%d", &n) != EOF) {
    printf("%d\n", sum[n + 1]);
  }
  return 0;
}