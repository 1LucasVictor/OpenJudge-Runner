#include<stdio.h>
int main(void) {
  int a[3], c, i, j;
  for(i = 0; i < 3; i++) {
    scanf("%d",&a[i]);
  }
  for(i = 0; i < 3; i++) {
    for(j = 0; j < 3-i-1; j++) {
      if(a[j] >= a[j+1]) {
        c = a[j];
        a[j] = a[j+1];
        a[j+1] = c;
      }
    }
  }
  printf("%d %d %d\n", a[0], a[1], a[2]);
  return 0;
}
