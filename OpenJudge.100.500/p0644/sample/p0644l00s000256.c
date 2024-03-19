#include <stdio.h>

int main() {
  char line[3];
  char* lp;
  int cnt = 0;
  
  scanf("%s", line);
  lp = line;
  for(int i = 0; i < 3; i++) {
    if(*(lp + i) == '1') {
		cnt++;
    }
  }
  printf("%d", cnt);

  return 0;
}