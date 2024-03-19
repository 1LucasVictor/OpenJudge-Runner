#include <stdio.h>
#include <string.h>

int main() {
  char str[201];
  int nh, h, is, iis, ih;
  while(scanf("%s", str), strcmp(str, "-")) {
    scanf("%d", &nh);
    for(is = ih = 0; ih < nh; ++ih) {
      scanf("%d", &h);
      is = (is + h) % strlen(str);
    }
    for(iis = 0; iis < strlen(str); ++iis) printf("%c", str[(is + iis) % strlen(str)]);
    printf("\n");
  }
  return 0;
}