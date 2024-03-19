#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  char str[1024];
  int a[100];
  int len;

  fgets(str, 1024, stdin);
  len = (int)strtol(str, NULL, 10);
  //  printf("len: %d \n", len);

  fgets(str, 1024, stdin);
  int i=0;
  char *tok;
  char *strp = str;

  for (i=0; i<len; i++) {
    if (i != 0) strp = NULL;
    tok = strtok(strp, " ");
    //    printf("tok: %s\n", tok);
    a[i] = strtol(tok, NULL, 10);
  }

  for (i=len-1; i>=0; i--){
    printf("%d", a[i]);
    if (i != 0) printf(" ");
    else  printf("\n");
  }

  return 0;
}