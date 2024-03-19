#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int main(void) {
  char *s, *t;
  s = (char *)malloc(sizeof(char) * 200000);
  t = (char *)malloc(sizeof(char) * 200000);
  scanf("%s", s);
  scanf("%s", t);
  int len=strlen(s),i,count=0;
  //printf("len:%d\n", len);
  char sc, tc;
  for (i = 0; i < len; i++) {
    sc = *s;
    tc = *t;
    if (sc != tc) count++;
    s++;
    t++;
  }
  printf("%d", count);
  return 0;
}