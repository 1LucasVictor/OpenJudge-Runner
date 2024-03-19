#include <stdio.h>
#include <math.h>
#define N 10000

int main()
{
  int n, i, j, arr[N], count = 0;

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%d", &arr[i]);
  }

  for(i = 0; i < n; i++){
    if(arr[i] == 2) count++;
    if(arr[i] < 2 || arr[i] % 2 == 0) continue;
    for(j = 3; j <= sqrt(arr[i]); j+=2){
      if(arr[i] % j == 0) break;

    }

    if(j > sqrt(arr[i])) count++;

  }

  printf("%d\n", count);

  return 0;
}