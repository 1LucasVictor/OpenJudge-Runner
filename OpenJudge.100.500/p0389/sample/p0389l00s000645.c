#include<stdio.h>
#include<string.h>
#define N 100

int main(void)
{
  int i, j, k = 0, m = 0, h, len[N] = {0}, cnt = 0, sum[N] = {0};
  char str[201], STR[100][201];

  while(cnt != -1) {
    scanf("%s", str);
    if(str[0] == '-') break;
    len[cnt] = strlen(str);
    scanf("%d", &m);
    for(i = 0; i < m; i++) {
      scanf("%d", &h);
      sum[cnt] += h;
    }
    strcpy(STR[cnt], str);
    strcat(STR[cnt], str);
    cnt++;
  }

  for(i = 0; i < cnt; i++) {
    k = sum[i]%len[i];
    for(j = k; j < k+len[i]; j++) {
      printf("%c", STR[i][j]);
    }
    printf("\n");
  }

  return 0;
}