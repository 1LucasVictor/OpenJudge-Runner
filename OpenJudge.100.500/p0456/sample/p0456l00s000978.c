#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//ABC172E
//ABC172D
//ABC172C
//ABC172B
int main(void) {
  int n, k, i, cou=0, tmp;
  char a;
  char s[2*100000], t[2*100000];
  scanf(" %s", s);
  (void)getchar();
  scanf(" %s", t);
  for(i=0; s[i]!='\0'; ++i){
    if(s[i]!=t[i]) cou++; //文字数
  }
  printf("%d", cou);
}
