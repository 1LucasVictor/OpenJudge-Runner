//ITP1-9-D: Transformation
//2019.05.20

#include <stdio.h>
#include <string.h>

int main(void){
  char str[1001];
  char tmp[1001];
  char cmd[8];
  int i, j, q, a, b;

  scanf("%s\n", str);
  scanf("%d\n", &q);

  for (i = 0; i < q; i++) {
    scanf("%s %d %d", cmd, &a, &b);
    if (strcmp(cmd, "print") == 0) {
      for (j = a; j < b+1; j++) printf("%c", str[j]);
      printf("\n");
    }else if (strcmp(cmd, "reverse") == 0) {
      strcpy(tmp, str);
      for (j = a; j < b+1; j++){
        str[j] = tmp[b-j+a];
      }
    }else if (strcmp(cmd, "replace") == 0) {
      char p[b-a+1+1];
      scanf("%s\n", p);
      for (j = a; j < b+1; j++) str[j] = p[j-a];
    }
  }

  return 0;
}

