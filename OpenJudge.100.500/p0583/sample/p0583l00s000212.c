#include <stdio.h>

int main(void) {

  int n,a,b,c,d;
  scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
  char s[n+1];
  scanf("%s", s);
  int sunuke = a-1;
  int funuke = b-1;
  if (c < d) {
    for (int i = funuke+2; i < d-1; i++) {
      if (s[i] == '#' && s[i-1] == '#') {
        printf("No\n");
        return 0;
      }
    }
    for (int i = sunuke+2; i < c-1; i++) {
      if (s[i] == '#' && s[i-1] == '#') {
        printf("No\n");
        return 0;
      }
    }
    printf("Yes\n");
    return 0;
  }
  int flag = 0;
  while (1) {
    sunuke++;
    if (sunuke >= n) {
      printf("No\n");
      return 0;
    }
    if (s[sunuke] == '#') {
      sunuke++;
      if (sunuke >= n || s[sunuke] == '#') {
        printf("No\n");
        return 0;
      } else if (sunuke == funuke) {
        funuke++;
        if (funuke >= n) {
          printf("No\n");
          return 0;
        }
        if (s[funuke] == '#') {
          funuke++;
          if (funuke >= n || s[funuke] == '#') {
            printf("No\n");
            return 0;
          }
        }
      }
    } else if (sunuke == funuke) {
      if (sunuke+1 >= n) {
        printf("No\n");
        return 0;
      }
      if (s[sunuke+1] != '#') {
        sunuke++;
        break;
      } else {
        funuke += 2;
        if (funuke >= n || s[funuke] == '#') {
          printf("No\n");
          return 0;
        }
      }
    }
    if (funuke > d-1) {
      printf("No\n");
      return 0;
    }
  }
  if (sunuke > c-1 || funuke > d-1) {
    printf("No\n");
    return 0;
  }
  for (int i = sunuke+2; i < c-1; i++) {
    if (s[i] == '#' && s[i-1] == '#') {
      printf("No\n");
      return 0;
    }
  }
  for (int i = funuke+2; i < d-1; i++) {
    if (s[i] == '#' && s[i-1] == '#') {
      printf("No\n");
      return 0;
    }
  }
  printf("Yes\n");

  return 0;
}