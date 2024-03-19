#include <stdio.h>
#include <string.h>

int main(void)
{
  int i, j, k = 0, q;
  char str[1001], tmp, p[1001];
  scanf("%s %d", str, &q);
  int a[q], b[q];
  char order[q][8];
  for(i = 0; i < q; i++) {
    scanf("%s %d %d", order[i], &a[i], &b[i]);
    if(strcmp(order[i], "replace") == 0) {
      scanf("%s", p);
    }
  }
  for(i = 0; i < q; i++) {
    if(strcmp(order[i], "print") == 0) {
      for(j = a[i]; j <= b[i]; j++) {
	printf("%c", str[j]);
      }
      printf("\n");
    } else if(strcmp(order[i], "reverse") == 0) {
      for(j = a[i]; j < a[i]+((b[i]-a[i])/2); j++) {
	k = b[i];
	tmp = str[j];
	str[j] = str[k];
	str[k] = tmp;
	k--;
      }
    } else if(strcmp(order[i], "replace") == 0) {
      k = 0;
      for(j = a[i]; j <= b[i]; j++) {
	str[j] = p[k];
	k++;
      }
    }
  }
  return 0;
}