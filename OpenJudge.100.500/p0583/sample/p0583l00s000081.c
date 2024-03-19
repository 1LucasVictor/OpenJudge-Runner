#include<stdio.h>

int main() {
  int n, a, b, c, d;
  scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
  a--;
  b--;
  c--;
  d--;
  char s[200000 + 2] = {'\0'};
  scanf("%s", s);
  int i;
  int ans = 1;
  if(c < d) {
    for(i = a; i < d; i++) {
      if(s[i] == '#' && s[i + 1] == '#') {
        ans = 0;
        break;
      }
    }
  } else {
    int cango = 0;
    for(i = b; i <= d; i++) {
      if(s[i] == '.' && s[i - 1] == '.' && s[i + 1] == '.') {
        cango = 1;
        break;
      }
    }
    for(i = 0; i < n - 1; i++) {
      if(s[i] == '#' && s[i + 1] == '#') {
        ans = 0;
        break;
      }
    }
    ans *= cango;
  }
  if(ans == 1) printf("Yes\n");
  else         printf("No\n");
  return 0;
}