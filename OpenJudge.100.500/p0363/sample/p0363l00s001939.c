#include<stdio.h>
int main(){
  int i, j, tmp;
  int a[3];
  for (i = 0; i < sizeof(a) / sizeof(int); i++) {
    scanf ("%d",&a[i]);
  }

  for (i = 0; i < sizeof(a) / sizeof(int) - 1; i++) {
    for (j = 1; j < sizeof(a) / sizeof(int); j++) {
      if (a[i] > a[j]) {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
      }
    }
  }

  printf ("%d %d %d\n", a[0], a[1], a[2]);

  return 0;
}
