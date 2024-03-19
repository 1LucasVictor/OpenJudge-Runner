#include <stdio.h>
#include <stdlib.h>

char mas[8][8];

void init() {
  int i, j;
  for(i = 0; i < 8; i++)
    for(j = 0; j < 8; j++)
      mas[i][j] = '.';
}

void out() {
  int i, j;
  for(i = 0; i < 8; i++) {
    for(j = 0; j < 8; j++) putchar(mas[i][j]);
    puts("");
  }
}

int used_r[8];
int used_c[8];
int used_d[2][16];
void dfs(int r, int n) {
  int c;
  if(n == 0) {
    out();
    exit(0);
  }
  if(r == 8) return;

  if(used_r[r]) {
    dfs(r+1, n);
    return;
  }
  for(c = 0; c < 8; c++) {
    if(used_c[c] || used_d[0][r-c+8] || used_d[1][r+c]) continue;
    used_r[r] = used_c[c] = used_d[0][r-c+8] = used_d[1][r+c] = 1;
    mas[r][c] = 'Q';
    dfs(r+1, n-1);
    mas[r][c] = '.';
    used_r[r] = used_c[c] = used_d[0][r-c+8] = used_d[1][r+c] = 0;
  }
}

int main() {
  int n, r, c, i;

  init();  
  scanf("%d", &n);
  for(i = 0; i < n; i++) {
    scanf("%d %d", &r, &c);
    mas[r][c] = 'Q';
    used_r[r] = 1;
    used_c[c] = 1;
    used_d[0][r-c+8] = used_d[1][r+c] = 1;
  }
  dfs(0, 8-n);

  return 0;
}