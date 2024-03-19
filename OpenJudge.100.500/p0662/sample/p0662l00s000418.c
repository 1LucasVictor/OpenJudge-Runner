#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct range {
  int start;
  int end;
};

#define max(a,b) ((a) > (b) ? (a) : (b))
#define min(a,b) ((a) < (b) ? (a) : (b))

#define BUF_SIZE 20

int main(void) {
  struct range range0, range1;
  char line[BUF_SIZE];
  FILE* fp = stdin;
  if(!fgets(line, BUF_SIZE, fp)) return 0;

  sscanf(line, "%d %d %d %d",
      &range0.start, &range0.end,
      &range1.start, &range1.end
  );
  int s = max(range0.start, range1.start);
  int g = min(range0.end, range1.end);
  printf("%d\n", (g-s>0)*(g-s));
  return 0;
}