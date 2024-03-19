#include <stdio.h>
#include <string.h>
#define MAX 1000000

int main(void){
  _Bool table[MAX];
  int i, j;
  int cnt;
  int n;

  memset(table,1,sizeof(table));

  for (i = 0; i < MAX; i+=2){
    table[i] = 0;
  }
  table[0] = 0;
  table[1] = 0;
  table[2] = 1;

  for (i = 3; i < MAX; i+=2){
    if (table[i]){
      for (j = i+i; j < MAX; j+=i){
	table[j] = 0;
      }
    }
  }

  while (scanf("%d", &n) != EOF){
    cnt = 0;
    for (i = 0; i <= n; i++){
      if (table[i]){
	cnt++;
      }
    }
    printf("%d\n", cnt);
  }

  return 0;
}