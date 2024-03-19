#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef long long ll;
const ll mod = 9999937LL;
const ll base = 9973LL;

ll table[9999937];

ll hash(char *str) {
  ll h = 0, p = 1;  
  int len = strlen(str);
  int i;
  
  for(i = 0; i < len; i++) {
    h = (h + str[i])*p % mod;
    p *= base;
  }
  
  return h;
}

void insert(char *str) {
  int h = hash(str);
  if(table[h]) {
    fprintf(stderr, "collision");
    exit(8);
  }
  table[h] = 1;
}

int find(char *str) {
  int h = hash(str);
  return table[h];
}

int main() {
  int n;
  char cmd[256], str[256];
  int i;

  memset(table, 0, sizeof(table));
  scanf("%d", &n);
  for(i = 0; i < n; i++) {
    scanf("%s %s", cmd, str);
    if(strcmp(cmd, "insert") == 0) {      
      insert(str);
    } else if(strcmp(cmd, "find") == 0) {
      int flag = find(str);
      puts((flag ? "yes" : "no"));
    }
  }
  
  return 0;
}