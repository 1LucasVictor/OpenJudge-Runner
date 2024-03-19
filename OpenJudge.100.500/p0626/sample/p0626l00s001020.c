#include <stdio.h>

int main(void){
  int D;
  int N;
  int hh[3] = {1, 100, 10000};
  char line[128];
  
  fgets(line,127,stdin);
  sscanf(line,"%d %d", &D, &N);
  printf("%d\n", hh[D]*N);
  
  return 0;
}
