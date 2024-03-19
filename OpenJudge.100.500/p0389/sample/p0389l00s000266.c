#include <stdio.h>
#include <string.h>

#define MAX 200

int main(void) {
    char First[MAX];
    char Copy[MAX];
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
        strncpy(Copy, First, h);
        int j = h, p = 0;
        while(First[j] != '\0') {
          First[p++] = First[j++];
        }
        j = length - h;
        p = 0;
        while(p < h) {
          First[j++] = Copy[p++];
        }
      }

      printf("%s\n", First);
    }
}

