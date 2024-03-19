#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//ABC120C
int main(void) {
  int n, k, i, cou=0, tmp;
  char s[100000];
  scanf(" %s", &s);
  for(i=0; s[i]!='\0'; ++i)
    cou=s[i]=='1' ? cou+1 : cou; //文字数
  cou=cou>i-cou ? i-cou : cou;
  printf("%d", 2*cou);
}