#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  int n,p = 0;
  char buf[1000000];
  char *tok,ch;
  int min,max;
  long long sum;
  scanf("%d", &n);
  while((ch = fgetc(stdin)) != '\n') {};
  int a[n];
  fgets(buf, sizeof(buf), stdin);
  tok = strtok(buf, " ");
  while(tok != NULL) {
    a[p++] = atoi(tok);
    tok = strtok(NULL, " ");
  }
  min = a[0];
  max = a[0];
  sum = 0;
  for(int i = 0; i < n; i++) {
    if(min > a[i])
      min = a[i];
    if(max < a[i])
      max = a[i];
    sum += a[i];
  }
  printf("%d %d %lld\n", min, max, sum);
  return 0;
}