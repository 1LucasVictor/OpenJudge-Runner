#include<stdio.h>
#include <string.h>

int main() {

  int i;
  int s = 0, h = 0, len;  
  char n[1001];
  
  while(1) {
    h = 0;
    scanf("%s", n);
    if(strcmp(n, "0") == 0) break;
    len = strlen(n);

    for(i = 0; i < len; i++) {
      h += n[i]-'0';
  }
    printf("%d\n", h);

  }

  return 0;

}