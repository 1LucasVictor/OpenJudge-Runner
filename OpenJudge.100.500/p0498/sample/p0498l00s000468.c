#include <stdio.h>

int main(void)
{
  int pages, papers, tmp1, tmp2;
  tmp1 = scanf("%d", &pages);
  if(tmp1 > 0 && tmp1 < 101);
  tmp2 = pages % 2;
  papers = pages / 2;
  if(tmp2 == 1){
    papers += 1;
  }
  printf("%d", papers);
  return 0;
}