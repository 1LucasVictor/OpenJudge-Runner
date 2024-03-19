#include <stdio.h>
#define LINE_BUF_SIZE 1024

static char line[LINE_BUF_SIZE];

int get_gcf(int, int);
int get_lcm(int, int, int);

int main(void) {
  int a, b, gcf, lcm;
  while(fgets(line, sizeof(line), stdin) != NULL) {
    sscanf(line, "%d %d", &a, &b);
    gcf = get_gcf(a, b);
    lcm = get_lcm(a, b, gcf);
    printf("%d %lld\n", gcf, lcm);
  }
  return 0;
}


int get_gcf(int a, int b) {
  int tmp;
  if (a < b){
    tmp = a;
    a = b;
    b = a;
  }
  if ((a % b) == 0)
    return b;
  else
    return get_gcf(a, a % b);
}


int get_lcm(int a, int b, int gcf) {
  int tmp_gcf;

  tmp_gcf = get_gcf(a, gcf);
  a = a / tmp_gcf;
  gcf = gcf / tmp_gcf;

  tmp_gcf = get_gcf(b, gcf);
  b = b / tmp_gcf;

  return a * b;
}

