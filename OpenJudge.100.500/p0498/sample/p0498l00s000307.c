#include<stdio.h>
int main(void)
{
  int page;
  char str[16];
  fgets(str,sizeof(str),stdin);
  sscanf(str,"%d",&page);
  page++;
  printf("%d",page/2);
  return 0;
}