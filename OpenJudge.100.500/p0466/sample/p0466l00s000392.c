#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//ABC167D
//ABC167C
//ABC167B
//ABC167A
int main(void) {
  int n, k, i, cou=0, tmp;
  char a[100], b[100];
  scanf(" %s %s", a, b);

  for(i=0; a[i]!='\0'; ++i)
    ;
  for(k=0; b[k]!='\0'; ++k)
    ;
  if(k==i+1 && strncmp(a,b,i)==0){
    printf("Yes");
  }else printf("No");
}
