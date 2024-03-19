#include<stdio.h>
#include<string.h>
int main(void)
{
  int i;
  char v[21];

  scanf("%s",v);
  putchar('\n');

  for(i=strlen(v)-1;i >= 0;i--)
    printf("%c",v[i]);

  printf("\n");

  return 0;

}