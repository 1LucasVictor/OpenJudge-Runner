#include<stdio.h>
 
int main () {
  int n[6], i;
  double x, y;
 
  while(scanf("%d", &n[0]) != EOF) {
    for (i = 1; i < 6; i += 1) {
      scanf("%d", &n[i]);
    };  
    x = (double)(n[4] * n[2] - n[1] * n[5]) / (n[0] * n[4] - n[1] * n[3]);
    y = (double)((-1) * n[3] *n[2] + n[0] * n[5]) / (n[0] * n[4] - n[1] * n[3]);
 
    printf("%.3f %.3f\n", x, y); 
  }
    return 0;
}