#include <stdio.h>

char str[200010];

int check(int s, int e) {
  int flag = 1;
  for (int i = s; i < e; i++) {
    if (str[i] == '#' && str[i+1] == '#') flag = 0;
  }
  return flag;
}

int main(void) {
  int n, a, b, c, d, tof = 0;
  scanf("%d %d %d %d %d", &n, &a ,&b ,&c, &d);
  scanf("%s", str);
  if (check(a, c) == 0 || check(b, d) == 0) {
    printf("No\n");
    return 0;
  }

  if (c > d) {
    for (int i = b; i < d; i++) {
      if (str[i-1] == '.' && str[i] == '.' && str[i+1] == '.') tof = 1;
    }
  }
  if (tof == 1 || c < d) printf("Yes\n");
  else printf("No\n");
  
  return 0;
}