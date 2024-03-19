#include <stdio.h>

int main() {
  int i, j, n, max, sum, r; // rは記憶
  int x[1000][3];

  scanf("%d", &n);

  for(i = 0; i < n; i++) {
    max = 0;
    scanf("%d %d %d", &x[i][0], &x[i][1], &x[i][2]);

    for(j = 0; j < 3; j++) {
      if(max < x[i][j]) {
	max = x[i][j];
	r = j;
      }
    }
    x[i][r] = 0; 

    sum = x[i][0] * x[i][0] + x[i][1] * x[i][1] + x[i][2] * x[i][2];
    
    if(max * max == sum) printf("YES\n");
    else printf("NO\n");
  }

  return 0;
}