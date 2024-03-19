#include <stdio.h>
#include <string.h>

int main(){
  int l, i, r;
  char n[1024];
  while(scanf("%s", n) && n[0] != '0'){
    l = strlen(n);
    for(r = i = 0; i < l; i++) r += n[i];
    printf("%d\n", r - l * '0');
  }
  return 0;
}

