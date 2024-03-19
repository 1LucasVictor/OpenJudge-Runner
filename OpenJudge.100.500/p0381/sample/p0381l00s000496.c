#include <stdio.h>

int main(void){
  int n, x, i, j, k, count = 0;
  int num, countSet[10000] = {};
  for(num = 0; ; num++){
    scanf("%d %d", &n, &x);
    if(n == 0 && x == 0)
      break;
    for(i = 1; i <= n; i++){
      for(j = i + 1; j <= n; j++){
	for(k = j + 1; k <= n; k++){
	  if(i + j + k == x)
	    count++;
	}
      }
    }
    countSet[num] = count;
  }

  for(i = 0; i < num; i++)
    printf("%d\n", countSet[i]);
  return 0;
}