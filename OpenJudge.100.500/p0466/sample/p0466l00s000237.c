#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define BUF 12

int main(void) {
  char strs[BUF], strt[BUF];
  scanf("%s %s", strs, strt);
  if (!strncmp(strs, strt, strlen(strs)) && (strlen(strt) - strlen(strs) == 1)) printf("Yes\n");
  else printf("No\n");

  return 0;
}
