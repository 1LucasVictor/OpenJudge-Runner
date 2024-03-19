#include <stdio.h>

int main(void)
{
  int n, m;
  int s[5], c[5];

  int i, j;
  int ans = 0;
  int oneh = 0, ten = 0, one = 0;

  /*input*/
  scanf("%d %d", &n, &m);
  for (i = 0; i < m; i++)
    scanf("%d %d", &s[i], &c[i]);

  /*error search*/
  /*different number*/
  for (i = 0; i < m; i++) {
    for (j = 0; j < m; j++) {
      if (i != j && s[i] == s[j] && c[i] != c[j])
	ans = -1;
    }
  }

  /*first 0*/
  if (n >= 2) {
    for (i = 0; i < m; i++) {
      if (s[i] == 1 && c[i] == 0)
	ans = -1;
    }
  }

  /*display*/
  if (ans == -1)
    printf("%d\n", ans);
  else {
    if (n == 1)
      printf("%d", ans + c[0]);
    else if (n == 2) {
      for (i = 0; i < m; i++) {
	if (s[i] == 1)
	  ten = c[i];
	else if (s[i] == 2)
	  one = c[i];
      }
      if (ten == 0)
	printf("%d", 10 + one);
      else 
	printf("%d", 10 * ten + one);
    }
      else if (n == 3) {
	for (i = 0; i < m; i++) {
	  if (s[i] == 1)
	    oneh = c[i];
	  else if (s[i] == 2)
	    ten = c[i];
	  else if (s[i] == 3)
	    one = c[i];
	}
	if (oneh == 0)
	  printf("%d", 100 + 10 * ten + one);
	else
	  printf("%d", 100 * oneh + 10 * ten + one);
      }
  }

  putchar('\n');

  return 0;
}
