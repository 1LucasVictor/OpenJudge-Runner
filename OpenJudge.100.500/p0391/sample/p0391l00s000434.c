#include <stdio.h>
#include <string.h>

int main(void) {
  char str[1001];
  int q;
  scanf("%s %d", str, &q);

  for (int i=0; i<q; i++) {
    char m[10];
    int a, b, j, k;
    scanf("%s %d %d", m, &a, &b);

    if (strcmp(m, "replace")==0) {
      char p[b-a+2];
      scanf("%s", p);

      for (j=a, k=0; j<=b; j++) {
        str[j]=p[k++];
      }
    }

    if (strcmp(m, "reverse")==0) {
      char tmp[1001];
      
      for (j=a, k=0; j<=b; j++) {
        tmp[k++]=str[j];
      }
      tmp[k--]='\0';

      for (j=a; j<b+1; j++) {
        str[j]=tmp[k--];
      }
    }

    if (strcmp(m, "print")==0) {
      for (int i=a; i<=b; i++) {
        printf("%c", str[i]);
      }
      printf("\n");
    }
  }
  return 0;
}
