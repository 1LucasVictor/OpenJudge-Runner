#include <stdio.h>
#include <string.h>

int main(void)
{
  int i, j, k = 0, q;
  char str[1001], tmp;
  scanf("%s %d", str, &q);
  int a[q], b[q];
  char order[q][8], p[q][1001];
  for(i = 0; i < q; i++) {
    scanf("%s %d %d", order[i], &a[i], &b[i]);
    if(strcmp(order[i], "replace") == 0) {
      scanf("%s", p[i]);
    }
  }
  for(i = 0; i < q; i++) {
    if(strcmp(order[i], "print") == 0) {
      for(j = a[i]; j <= b[i]; j++) {
	printf("%c", str[j]);
      }
      printf("\n");
    } else if(strcmp(order[i], "reverse") == 0) {
      k = b[i];
      for(j = a[i]; j < 1001; j++) {
	if(str[j]>=str[k]) break;
	tmp = str[j];
	str[j] = str[k];
	str[k] = tmp;
	k--;
      }
    } else if(strcmp(order[i], "replace") == 0) {
      k = 0;
      for(j = a[i]; j <= b[i]; j++) {
	str[j] = p[i][k];
	k++;
      }
    }
  }
  return 0;
}