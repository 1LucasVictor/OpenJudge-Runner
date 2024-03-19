#include <stdio.h>
#include <string.h>

#define MAX 200

int main(void) {
    char First[MAX];
    char Copy1[MAX];
    char Copy2[MAX];
    int m, h, length;
    char str;

    while(1) {
      scanf("%s", First);

      if(strcmp(First, "-") == 0) {
        break;
      }

      scanf("%d", &m);

      length = strlen(First);
      for(int i=0; i<m; ++i) {
        scanf("%d", &h);
        strncpy(Copy1, First, h);
        strncpy(Copy2, &First[h], length-h);
        strncpy(First, Copy2, length-h);
        strncpy(&First[length-h], Copy1, h);
      }

      printf("%s\n", First);

    }
}

