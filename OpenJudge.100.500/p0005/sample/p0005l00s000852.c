#include<stdio.h>
#include<string.h>
int main(void)
{
  char str[21];
  int i,n;

  scanf("%s",str);
  //  n=strlen(str);
  //  printf("%d\n", n);

  for(i=strlen(str)-1;i>=0;i--)
    printf("%c",str[i]);
  printf("\n");

  return 0;
}