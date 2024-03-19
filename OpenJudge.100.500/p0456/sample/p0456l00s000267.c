#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
  char* line1;
  char* line2;
  int i;
  int n;
  int cnt;
  line1 = (char*)malloc(sizeof(char)*200005);
  line2 = (char*)malloc(sizeof(char)*200005);
  fgets(line1, 200005, stdin);
  fgets(line2, 200005, stdin);
  n = strlen(line1);
  cnt = 0;
  for ( i = 0; i < n; i++ ) {
    if (line1[i] != line2[i]) {
      cnt++;
    }
  }
  printf("%d\n", cnt);
  free(line1);
  free(line2);
  return 0;
}

